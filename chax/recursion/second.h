#ifndef _chax_second
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #define _chax_second(a, b, ...) b
      #endif
    #endif
  #endif
#endif

#ifndef _chax_second
  #error "unable to define `_chax_second`. requires C99 or later (variadic macros)."
#endif
