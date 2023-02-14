#include "stringize.h"

#ifndef _chax_assert
  #include <stdio.h>
  #include <stdlib.h>
  #define _chax_assert(cond, message) \
    ((cond) ? 0 : ( \
      fprintf(stderr, __FILE__ ":" _chax_stringize(__LINE__) " assert(" #cond "): " message "\n"), \
      exit(EXIT_FAILURE), \
      1 \
    ))
#endif
