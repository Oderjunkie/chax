#include "recursion/eval.h"
#include "recursion/obstruct.h"
#include "recursion/second.h"

#ifndef _chax_fold
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #define _chax_fold(initial, folder, ...) _chax_eval(_chax_fold1(initial, folder __VA_OPT__(,) __VA_ARGS__))
        #define _chax_fold1(initial, folder, ...) _chax_second(__VA_OPT__(,) _chax_fold2(initial, folder, __VA_ARGS__),)
        #define _chax_fold2(initial, folder, car, ...) _chax_second(__VA_OPT__(,) _chax_obstruct(folder)()(car, _chax_obstruct(_chax_fold3)()(initial, folder __VA_OPT__(,) __VA_ARGS__)), _chax_obstruct(folder)()(car, initial))
        #define _chax_fold3() _chax_obstruct(_chax_fold4)()
        #define _chax_fold4() _chax_fold1
      #endif
    #endif
  #endif
#endif

#ifndef _chax_fold
  #error "unable to define `_chax_fold`. requires C99 or later (variadic macros)."
#endif
