#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  va_list args;
  va_start(args, fmt);
  int temp = 0;
  for(int i = 0; fmt[i] != '\0'; i++) {
    if(fmt[i] == '%') {
      i++;
      switch (fmt[i]) {
        case 's':{
          char *str = va_arg(args, char *);
          int len = strlen(str);
          for(int j = 0; j < len; j++) {
            out[temp] = str[j];
            temp++;
          }
        }
        case 'd': {
          int num = va_arg(args, int);
          int dnum = 1, ynum;//十位以上的数（整除后的）和余数
          if(num < 0) {
            out[temp] = '-';
            temp++;
          }
          while(dnum) {
            dnum = num / 10;
            ynum = num % 10;
            out[temp] = ynum + '0';
            temp++;
          }
        }
        default:{
          out[temp++] = '%';
          out[temp++] = fmt[i];
        }
      }
    }
    else {
      out[temp] = fmt[i];
      temp++;
    }
  }
  out[temp] = '\0';
  va_end(args);
  return temp;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
