#include "recursion/obstruct.h"
#include "vaopt.h"
#include "ifptr.h"

#ifndef _chax_printfspecifier
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 201112L
        #define _chax_printfspecifier(callback, x, ...) _Generic((x), \
          char: _chax_obstruct(callback)()("%c" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          unsigned char: _chax_obstruct(callback)()("%c" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          short: _chax_obstruct(callback)()("%hi" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          unsigned short: _chax_obstruct(callback)()("%hu" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          int: _chax_obstruct(callback)()("%i" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          unsigned int: _chax_obstruct(callback)()("%u" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          long: _chax_obstruct(callback)()("%li" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          unsigned long: _chax_obstruct(callback)()("%lu" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          long long: _chax_obstruct(callback)()("%lli" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          unsigned long long: _chax_obstruct(callback)()("%llu" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          float: _chax_obstruct(callback)()("%g" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          double: _chax_obstruct(callback)()("%g" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          long double: _chax_obstruct(callback)()("%Lg" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          char *: _chax_obstruct(callback)()("%s" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), \
          default: _chax_ifptr(x, _chax_obstruct(callback)()("%p" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__), _chax_obstruct(callback)()("" _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__)) \
        )
      #endif
    #endif
  #endif
#endif

#ifndef _chax_printfspecifier
  #error "unable to define `_chax_printfspecifier`. requires C11 or later (use of `_Generic`)."
#endif
