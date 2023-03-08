#ifndef _chax_typematch
  #ifdef __GNUC__
    #define _chax_typematch(x, y) __builtin_types_compatible_p(typeof(x), typeof(y))
  #endif
#endif

#ifndef _chax_typematch
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ > 201112L
        #define _chax_typematch(x, y) _Generic((x), typeof(y): 1, default: 0)
      #endif
    #endif
  #endif
#endif

#ifndef _chax_typematch
  #error "unable to define `_chax_typematch`. requires GNU C (`__builtin_types_compatible_p`) C11 or later (use of `_Generic`)."
#endif