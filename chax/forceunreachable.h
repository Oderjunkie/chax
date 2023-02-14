#ifndef _chax_forceunreachable
  #ifndef __cplusplus
    #include <utility>
    #define _chax_forceunreachable std::unreachable()
  #endif
#endif

#ifndef _chax_forceunreachable
  #ifdef __GNUC__
    #if __GNUC__ > 4
      #define _chax_forceunreachable __builtin_unreachable()
    #endif
  #endif
#endif

#ifndef _chax_forceunreachable
  #ifdef __GNUC__
    #if __GNUC__ == 4
      #if __GNUC_MINOR__ == 5
        #define _chax_forceunreachable __builtin_unreachable()
      #endif
    #endif
  #endif
#endif

#ifndef _chax_forceunreachable
  #define _chax_forceunreachable \
    do { \
      char *x = "a"; \
      x[0] = 'b'; \
    } while(0)
#endif
