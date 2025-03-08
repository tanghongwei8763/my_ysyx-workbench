#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  char *temp = dst;
  while (*src) {
    *temp = *src;
    temp++;
    src++;
  }
  *temp = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  char *temp = dst;
  while (*temp) {
    temp++;
  }
  while (*src) {
    *temp = *src;
    temp++;
    src++;
  }
  *temp = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
  while (*s1 && *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
  if(*s1 < *s2)
    return -1;
  else if (*s1 > *s2)
    return 1;
  else 
    return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
  unsigned char *temp = (unsigned char *)s;
  for (size_t i = 0; i < n; i++) {
    *temp = c;
    temp ++;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
    const unsigned char *temp1 = (const unsigned char *)s1;
    const unsigned char *temp2 = (const unsigned char *)s2;
  while (n) {
    if(*temp1 < *temp2)
      return -1;
    else if (*temp1 > *temp2)
      return 1;
    temp1++;
    temp2++;
    n--;
  }
  return 0;
}

#endif
