#include "empty.h"
#include "defer.h"

#ifndef _chax_obstruct
  #define _chax_obstruct(x) x _chax_defer(_chax_empty)()
#endif
