#include "stringize.h"

#ifndef _chax_format
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #include <stdio.h>
        #include <stdarg.h>
        #include <stdlib.h>
        
        static char *_chax_format1(const char *dbg, const char *fmt, ...) {
          char *buf;
          int len;
          va_list args1, args2;
          va_start(args1, fmt);
          va_copy(args2, args1);
          len = vsnprintf(NULL, 0, fmt, args1) + 1;
          if (len < 0) {
            perror(dbg);
            exit(EXIT_FAILURE);
          }
          buf = malloc(len);
          va_end(args1);
          if (vsnprintf(buf, len, fmt, args2) < 0) {
            perror(dbg);
            exit(EXIT_FAILURE);
          }
          va_end(args2);
          return buf;
        }
        
        #define _chax_format(...) _chax_format1(__FILE__ ":" _chax_stringize(__LINE__), __VA_ARGS__)
      #endif
    #endif
  #endif
#endif

#ifndef _chax_format
  #error "unable to define `_chax_format`. requires C99 or later (vsnprintf, variadic macros)."
#endif
