#include "staticerr.h"
#include "constifexpr.h"

#ifndef _chax_staticassert
  #define _chax_staticassert(cond, message) \
    _chax_constifexpr(cond, \
      0, \
      _chax_staticerr("staticassert(" #cond "): " message) \
    )
#endif
