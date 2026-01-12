#include <fs.h>
#include <device.h>

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode) {
  for (int i = 0; i < LENGTH(file_table); ++i) {
    if (!strcmp(pathname, file_table[i].name)) {
      file_table[i].open_offset = 0;
      return i;
    }
  }
  Log("file %s not found", pathname);
  return -1;
}

size_t fs_read(int fd, void *buf, size_t len){
  // Log("read:fd=0x%d, buf=0x%08x, len=%d", fd, buf, len);
  assert(0 <= fd && fd < LENGTH(file_table));

  if (file_table[fd].open_offset > file_table[fd].size) return 0;

  if (file_table[fd].open_offset + len > file_table[fd].size) len = file_table[fd].size - file_table[fd].open_offset;
  ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
  file_table[fd].open_offset += len;
  return len;
}

size_t fs_write(int fd, const void *buf, size_t len){
  // Log("write:fd=0x%d, buf=0x%08x, len=%d", fd, buf, len);
  assert(0 <= fd && fd < LENGTH(file_table));
  if (file_table[fd].open_offset > file_table[fd].size) 
    return 0;

  if (file_table[fd].write)
    file_table[fd].write(buf, file_table[fd].open_offset, len);
  else {
    if (file_table[fd].open_offset + len > file_table[fd].size) 
      len = file_table[fd].size - file_table[fd].open_offset;
    ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
  }
  file_table[fd].open_offset += len;
  return len;
}

int fs_close(int fd){
  // Log("close:fd=0x%d", fd);
  assert(0 <= fd && fd < LENGTH(file_table));
  return 0;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  // Log("lseek:fd=0x%d, offset=%d, whence=%d", fd, offset, whence);
  assert(0 <= fd && fd < LENGTH(file_table));
  switch (whence) {
    case SEEK_SET:
      file_table[fd].open_offset = offset;
    break;
    case SEEK_CUR:
      file_table[fd].open_offset += offset;
    break;
    case SEEK_END:
      file_table[fd].open_offset = file_table[fd].size + offset;
    break;
    default: assert(0);
  }
  return file_table[fd].open_offset;
}