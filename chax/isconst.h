#ifndef _chax_isconst
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 201112L
        #define _chax_isconst(x) \
          _Generic((8 ? ((void *)((long)(x) * 0l)) : (int *)8), \
            void *: 0, \
            int *: 1 \
          )
      #endif
    #endif
  #endif
#endif

#ifndef _chax_isconst
  #ifdef __GNUC__
    #define _chax_isconst(x) \
      (sizeof(int) == sizeof(*(8 ? ((void *)((long)(x) * 0l)) : (int *)8)))
  #endif
#endif

#ifndef _chax_isconst
  #error "unable to define `_chax_isconst`. requires either C11 or later (use of `_Generic`), or GNU C (use of `sizeof(void)`)"
#endif
