#include <am.h>
#include <assert.h>
#include <string.h>
#include <sys/time.h>
#include <NDL.h>

#define keyname(k) #k,

#define LENGTH(arr)         (sizeof(arr) / sizeof((arr)[0]))
#define NR_NUMS             (sizeof(keyname) / sizeof(const char *))

static const char *keyname[] = {
  "NONE",
  AM_KEYS(keyname)
};

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true; }
static void __am_gpu_status(AM_GPU_STATUS_T *status)  { status->ready = true; }

static int WIDE = 0, HIGHT = 0;
static void __am_gpu_init() { NDL_OpenCanvas(&WIDE, &HIGHT); }
static void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = WIDE, .height = HIGHT,
    .vmemsz = WIDE * HIGHT * sizeof(uint32_t)
  };
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  struct timeval tv;
  assert(gettimeofday(&tv, NULL) == 0);
  uptime->us = tv.tv_sec * 1000000 + tv.tv_usec;
}

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  char buf[64];
  int res = NDL_PollEvent(buf, sizeof(buf));
  if (res) {
    kbd->keydown = buf[1] == 'd' ? 1 : 0;
    *strchr(buf + 3, '\n') = '\0';
    for (int i = 0; i < NR_NUMS; ++i) {
      if (!strcmp(keyname[i], buf + 3)) {
        kbd->keycode = i;
        break;
      }
    }
  } else {
    kbd->keycode = AM_KEY_NONE;
    kbd->keydown = 0;
  }
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  NDL_DrawRect(ctl->pixels, ctl->x, ctl->y, ctl->w, ctl->h);
}


typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,
};

static void fail(void *buf) { assert("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  NDL_Init(0);
  __am_gpu_init();
  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }