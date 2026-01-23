#ifndef __SDL_VIDEO_H__
#define __SDL_VIDEO_H__

#define SDL_HWSURFACE 0x1
#define SDL_PHYSPAL 0x2
#define SDL_LOGPAL 0x4
#define SDL_SWSURFACE  0x8
#define SDL_PREALLOC  0x10
#define SDL_FULLSCREEN 0x20
#define SDL_RESIZABLE  0x40

#define DEFAULT_RMASK 0x00ff0000
#define DEFAULT_GMASK 0x0000ff00
#define DEFAULT_BMASK 0x000000ff
#define DEFAULT_AMASK 0xff000000

typedef struct {
	int16_t x, y;
	uint16_t w, h;
} SDL_Rect;

typedef union {
  struct {
    uint8_t r, g, b, a;   // 分量形式：rgba四通道
  };
  uint32_t val;           // 整体形式：32位无符号整数
} SDL_Color;

typedef struct {
	int ncolors;        // 调色板里的颜色总数
	SDL_Color *colors;  // 颜色数组的指针
} SDL_Palette;

typedef struct {
	SDL_Palette *palette;    // 调色板指针（索引色用）
	uint8_t BitsPerPixel;    // 每个像素占【多少位】
	uint8_t BytesPerPixel;   // 每个像素占【多少字节】
	uint8_t Rloss, Gloss, Bloss, Aloss; // 颜色损失位
	uint8_t Rshift, Gshift, Bshift, Ashift; // 颜色移位值
	uint32_t Rmask, Gmask, Bmask, Amask;    // 颜色掩码值
} SDL_PixelFormat;

typedef struct {
	uint32_t flags;          // 表面属性标记（忽略）
	SDL_PixelFormat *format; // 像素格式指针
	int w, h;                // 画布的宽度、高度
	uint16_t pitch;          // 一行像素的总字节数
	uint8_t *pixels;         // 像素数据的首地址
} SDL_Surface;

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask);
SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask);
SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags);
void SDL_FreeSurface(SDL_Surface *s);
void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect);
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color);
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h);
void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect);
void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors);
SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags);
uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a);
int SDL_LockSurface(SDL_Surface *s);
void SDL_UnlockSurface(SDL_Surface *s);

#endif
