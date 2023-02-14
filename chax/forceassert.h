#include "forceunreachable.h"

#ifndef _chax_forceassert
  #define _chax_forceassert(cond) \
    if (!(cond)) { \
      _chax_forceunreachable; \
    } else do {} while (0)
#endif
