#include "recursion/eval.h"
#include "recursion/obstruct.h"
#include "recursion/second.h"
#include "vaopt.h"

#ifndef _chax_mapreduce
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #define _chax_mapreduce(mapper, reducer, ...) _chax_eval(_chax_mapreduce1(mapper, reducer _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__))
        #define _chax_mapreduce1(mapper, reducer, ...) _chax_second(_chax_vaopt((__VA_ARGS__), ,) _chax_mapreduce2(mapper, reducer, __VA_ARGS__),)
        #define _chax_mapreduce2(mapper, reducer, car, ...) _chax_second(_chax_vaopt((__VA_ARGS__), ,) _chax_obstruct(reducer)()(mapper(car), _chax_obstruct(_chax_mapreduce3)()(mapper, reducer _chax_vaopt((__VA_ARGS__), ,) __VA_ARGS__)), mapper(car))
        #define _chax_mapreduce3() _chax_obstruct(_chax_mapreduce4)()
        #define _chax_mapreduce4() _chax_obstruct(_chax_mapreduce5)()
        #define _chax_mapreduce5() _chax_obstruct(_chax_mapreduce6)()
        #define _chax_mapreduce6() _chax_obstruct(_chax_mapreduce7)()
        #define _chax_mapreduce7() _chax_obstruct(_chax_mapreduce8)()
        #define _chax_mapreduce8() _chax_obstruct(_chax_mapreduce9)()
        #define _chax_mapreduce9() _chax_obstruct(_chax_mapreduce10)()
        #define _chax_mapreduce10() _chax_obstruct(_chax_mapreduce11)()
        #define _chax_mapreduce11() _chax_mapreduce1
      #endif
    #endif
  #endif
#endif

#ifndef _chax_mapreduce
  #error "unable to define `_chax_mapreduce`. requires C99 or later (variadic macros)."
#endif
