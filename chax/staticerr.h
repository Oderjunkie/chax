#include "stringize.h"

#ifndef _chax_staticerr
  #ifdef DEBUG
    #include <stdio.h>
    #include <stdlib.h>
    #define _chax_staticerr(message) \
      ( \
        fprintf(stderr, "ERROR " __FILE__ ":" _chax_stringize(__LINE__) " " message "\n"), \
        exit(EXIT_FAILURE), \
        1 \
      ))
  #endif
#endif

#ifndef _chax_staticerr
  #include "asmexpr.h"
  #define _chax_staticerr(message) \
    _chax_asmexpr("ERROR " __FILE__ ":" _chax_stringize(__LINE__) " " message "\n")
#endif
