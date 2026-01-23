#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>
#include <fcntl.h>

static int evtdev = -1;
static int fbdev = -1;
static int dispinfo = -1;
static int sbctrl = -1;
static int sbdev = -1;
static int screen_w = 0, screen_h = 0;
static int offset_x = 0, offset_y = 0;
static struct timeval start_tv, cur_tv;

uint32_t NDL_GetTicks() {
  gettimeofday(&cur_tv, NULL);
  uint32_t spend_time = (cur_tv.tv_sec - start_tv.tv_sec) * 1000000 + (cur_tv.tv_usec - start_tv.tv_usec);
  return spend_time;
}

int NDL_PollEvent(char *buf, int len) {
  evtdev = open("/dev/events", 0, 0);
  return read(evtdev, buf, len) != 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM countize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  } else {
    fbdev = open("/dev/fb", 0, 0);

    char buf[64];
    int dispinfo = open("/proc/dispinfo", 0, 0);
    int len = read(dispinfo, buf, sizeof(buf));
    close(dispinfo);
    buf[len + 1] = '\0';

    char *p = strstr(buf, "WIDTH");
    p = strchr(p, ':');
    sscanf(p + 1, "%d", &screen_w);
    
    p = strstr(buf, "HEIGHT");
    p = strchr(p, ':');
    sscanf(p + 1, "%d", &screen_h);

    if (*w == 0 && *h == 0) {
      *w = screen_w;
      *h = screen_h;
    }
    offset_x = (screen_w - *w) / 2;
    offset_y = (screen_h - *h) / 2;
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  x += offset_x; y += offset_y;
  for (int i = 0; i < h; i++) {
    lseek(fbdev, ((y + i) * screen_w + x) * 4, SEEK_SET);
    write(fbdev, pixels + w * i, w * 4);
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
  sbctrl = open("/dev/sbctl", 0, 0);
  sbdev = open("/dev/sb", 0, 0);
  uint32_t buf[3] = {freq, channels, samples};
  write(sbctrl, buf, 12);
}

void NDL_CloseAudio() {
  close(sbctrl);
  close(sbdev);
}

int NDL_PlayAudio(void *buf, int len) {
  int bytes_left = len;
  while (bytes_left) {
    bytes_left -= write(sbdev, buf + len - bytes_left, bytes_left);
  }
  return 0;
}

int NDL_QueryAudio() {
  int count;
  char buf[64];
  read(sbctrl, buf, sizeof(buf));
  sscanf(buf, "%d", &count);
  return count;
}


int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  gettimeofday(&start_tv, NULL);
  return 0;
}

void NDL_Quit() {
  if(evtdev   != -1) {close(evtdev  ), evtdev   = -1;}
  if(fbdev    != -1) {close(fbdev   ), fbdev    = -1;}
  if(dispinfo != -1) {close(dispinfo), dispinfo = -1;}
  if(sbctrl   != -1) {close(sbctrl  ), sbctrl   = -1;}
  if(sbdev    != -1) {close(sbdev   ), sbdev    = -1;}
}
