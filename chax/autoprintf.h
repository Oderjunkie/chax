#include <stdio.h>
#include "vaopt.h"
#include "printfspecifier.h"
#include "recursion/obstruct.h"
#include "recursion/eval.h"
#include "recursion/second.h"

#ifndef _chax_autoprintf
  #define _chax_autoprintf(...) _chax_eval(_chax_autoprintf1(__VA_ARGS__))
  #define _chax_autoprintf1(...) _chax_second(_chax_vaopt((__VA_ARGS__), ,) _chax_autoprintf2(__VA_ARGS__), _chax_autoprintf7(printf("\n")))
  #define _chax_autoprintf2(car, ...) (_chax_autoprintf7(_chax_autoprintf4(car)) || _chax_obstruct(_chax_autoprintf3)()(__VA_ARGS__))
  #define _chax_autoprintf3() _chax_autoprintf1
  #define _chax_autoprintf4(expr) printf(_chax_printfspecifier(_chax_autoprintf5, expr), expr)
  #define _chax_autoprintf5() _chax_autoprintf6
  #define _chax_autoprintf6(fmtstr) fmtstr
  int _chax_autoprintf7(int n) { return n >= 0 ? 0 : n; }
#endif