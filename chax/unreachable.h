#include "staticerr.h"
#include "constifexpr.h"

#ifndef _chax_unreachable
  #define _chax_unreachable(message) \
    _chax_constifexpr(cond, \
      0, \
      _chax_staticerr("unreachable: " message) \
    )
#endif
