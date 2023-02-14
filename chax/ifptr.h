#include "constifexpr.h"

#ifndef _chax_ifptr
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 201112L
        #include <stddef.h>
        #define _chax_ifptr1(x) _Generic((x), \
                 char: 0,      unsigned char: 0, \
                short: 0,     unsigned short: 0, \
                  int: 0,       unsigned int: 0, \
                 long: 0,      unsigned long: 0, \
            long long: 0, unsigned long long: 0, \
                float: 0,             double: 0, \
          long double: 0, \
              default: 1 \
        )
        
        #define _chax_ifptr(x, y, z) _chax_constifexpr((sizeof(x) == sizeof(void*)) && _chax_ifptr1(x), y, z)
      #endif
    #endif
  #endif
#endif

#ifndef _chax_ifptr
  #error "unable to define `_chax_ifptr`. requires C11 or later (`_Generic`)."
#endif
