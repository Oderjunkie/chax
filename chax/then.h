#ifndef _chax_then
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #define _chax_then(...) \
          for ( \
            int _then_TEMPORARY_VARIABLE = 1; \
            _then_TEMPORARY_VARIABLE; \
            ((__VA_ARGS__), _then_TEMPORARY_VARIABLE = 0) \
          )
      #endif
    #endif
  #endif
#endif

#ifndef _chax_then
  #error "unable to define `_chax_then`. requires C99 or later (for loop initial declarations)."
#endif
