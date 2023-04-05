#ifndef _chax_with
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #define _chax_with(...) \
          for ( \
            int _chax_with_TEMPORARY_VARIABLE = 1; \
            _chax_with_TEMPORARY_VARIABLE; \
            _chax_with_TEMPORARY_VARIABLE = 0 \
          ) \
            for ( \
              __VA_ARGS__; \
              _chax_with_TEMPORARY_VARIABLE; \
              _chax_with_TEMPORARY_VARIABLE = 0 \
            )
      #endif
    #endif
  #endif
#endif

#ifndef _chax_with
  #error "unable to define `_chax_with`. requires C99 or later (for loop initial declarations, varaidic macros)."
#endif
