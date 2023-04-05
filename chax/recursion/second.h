#ifndef _chax_second
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #define _chax_second(...) _chax_second1(_chax_second2, (__VA_ARGS__))
        #define _chax_second1(macro, args) macro args
        #define _chax_second2(a, b, ...) b
      #endif
    #endif
  #endif
#endif

#ifndef _chax_second
  #error "unable to define `_chax_second`. requires C99 or later (variadic macros)."
#endif
