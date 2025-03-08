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

void inttostr(int num, char *str, int base) {
    int i = 0;
    int is_negative = 0;
    if (num < 0 && base == 10) {
        is_negative = 1;
        num = -num;
    }
    if (num == 0) {
        str[i++] = '0';
    }
    while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem - 10) + 'a' : rem + '0';
        num = num / base;
    }
    if (is_negative) {
        str[i++] = '-';
    }
    str[i] = '\0';

    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
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
          break;
        }
        case 'd': {
                    int num = va_arg(args, int);
                    char num_str[20];
                    inttostr(num, num_str, 10);
                    int len = strlen(num_str);
                    for (int j = 0; j < len; j++) {
                        out[temp++] = num_str[j];
                    }
                    break;
                }
        default:{
          out[temp++] = '%';
          out[temp++] = fmt[i];
          break;
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
