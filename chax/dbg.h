#include "autoprintf.h"

#ifndef _chax_dbg
  #ifdef DEBUG
    #define _chax_dbg(x) \
      _chax_inlinewith(typeof(x), y, x, ( \
        _chax_autoprintf(__FILE__ ":" _chax_stringize(__LINE__) ": " #x " = ", y, "\n"), \
        y \
      ))
  #endif
#endif

#ifndef _chax_dbg
    #define _chax_dbg(x) x
#endif
