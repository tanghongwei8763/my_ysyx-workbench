#include <common.h>
#include <device.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (int i = 0; i < len; i++) {
    putch(*((char*)buf + i));
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T kbd;
  ioe_read(AM_INPUT_KEYBRD, &kbd);
  int keycode = kbd.keycode;
  int keydown = kbd.keydown;
  if(keycode == 0) return 0;
  return snprintf((char *)buf, len, "k%c %s\n", keydown ? 'd' : 'u', keyname[keycode]);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg;
  ioe_read(AM_GPU_CONFIG, &cfg);
  return snprintf(buf, len, "WIDTH:%d\nHEIGHT:%d", cfg.width, cfg.height);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg;
  ioe_read(AM_GPU_CONFIG, &cfg);
  
  int y = offset / 4 / cfg.width;
  int x = offset / 4 % cfg.width;

  io_write(AM_GPU_FBDRAW, x, y, (void *)buf, len / 4, 1, true);
 
  return len;
}

size_t sb_write(const void *buf, size_t offset, size_t len) {
  AM_AUDIO_PLAY_T play;
  play.buf.start = (void *)buf;
  play.buf.end = (void *)buf + len;
  ioe_write(AM_AUDIO_PLAY, &play);
  return len;
}

size_t sbctl_read(void *buf, size_t offset, size_t len) {
  AM_AUDIO_CONFIG_T cfg;
  ioe_read(AM_AUDIO_CONFIG, &cfg);

  AM_AUDIO_STATUS_T stat;
  ioe_read(AM_AUDIO_STATUS, &stat);

  return sprintf(buf, "%d", cfg.bufsize - stat.count);
}

size_t sbctl_write(const void *buf, size_t offset, size_t len) {
  assert(len == 12);
  AM_AUDIO_CTRL_T ctl;
  ctl.freq = *(int *)buf;
  ctl.channels = *(int *)(buf + 4);
  ctl.samples = *(int *)(buf + 8);
  ioe_write(AM_AUDIO_CTRL, &ctl);
  return 12;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
