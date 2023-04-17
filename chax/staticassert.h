#include "staticerr.h"
#include "constifexpr.h"

#ifndef _chax_staticassert
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 201112L
        /* https://stackoverflow.com/a/58263525 */
        #define _chax_staticassert(cond, message) \
          (void) sizeof(struct { \
            int dummy; \
            _Static_assert((cond), "_chax_staticassert(" #cond "): " message); \
          })
      #endif
    #endif
  #endif
#endif

#ifndef _chax_staticassert
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #define _chax_staticassert(cond, message) \
          (void) sizeof(struct { \
            int static_assertion_failed : (cond) ? 2 : -1;  \
          })
      #endif
    #endif
  #endif
#endif

#ifndef _chax_staticassert
  #define _chax_staticassert(cond, message) \
    _chax_constifexpr(cond, \
      0, \
      _chax_staticerr("_chax_staticassert(" #cond "): " message) \
    )
#endif
