#include "ifarr.h"
#include "staticerr.h"

#ifndef _chax_len
  #define _chax_len(arr) _chax_ifarr(arr, \
    sizeof(arr) / sizeof(arr[0]), \
    _chax_staticerr("passed non-array \"" #arr "\" to _chax_len") \
  )
#endif
