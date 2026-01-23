#include <am.h>
#include <nemu.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

static uint32_t sbuf_pos = 0;
static int buf_size;
static uintptr_t buf;

void __am_audio_init() {
  buf_size = inl(AUDIO_SBUF_SIZE_ADDR);
  buf = AUDIO_SBUF_ADDR;
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = true;
  cfg->bufsize = buf_size;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);
  outl(AUDIO_INIT_ADDR, 1);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  uint8_t *audio_data = ctl->buf.start;
  uint32_t len = ctl->buf.end - ctl->buf.start;
  uint8_t *ab = (uint8_t *)(uintptr_t)AUDIO_SBUF_ADDR;
  int audio_left = len;

  while (audio_left > 0) {
    int free_space = buf_size - io_read(AM_AUDIO_STATUS).count;
    if (free_space <= 0) {
      continue;
    }

    while (audio_left > 0 && free_space > 0) {
      int write_len = 0;
      uintptr_t curr_addr = (uintptr_t)&ab[sbuf_pos];

      if (audio_left >= 4 && free_space >= 4 && !(curr_addr & 0b11)) {
        outl(curr_addr, *(uint32_t *)audio_data);
        write_len = 4;
      } else {
        outb(curr_addr, *audio_data);
        write_len = 1;
      }

      audio_data += write_len;
      audio_left -= write_len;
      free_space -= write_len;
      sbuf_pos = (sbuf_pos + write_len) % buf_size;
    }
  }
  outl(AUDIO_COUNT_ADDR, inl(AUDIO_COUNT_ADDR) + len);
}
