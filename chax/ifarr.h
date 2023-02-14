#include "ifptr.h"

#ifndef _chax_ifarr
  #define _chax_ifarr(x, y, z) _chax_ifptr(x, z, _chax_ifptr((0, x), y, z))
#endif
