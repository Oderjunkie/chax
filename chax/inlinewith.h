#ifndef _chax_inlinewith
  #ifdef __GNUC__
    #define _chax_inlinewith(T, x, y, expr) ({ \
      T x = y; \
      (expr); \
    })
  #endif
#endif

#ifndef _chax_inlinewith
  #ifdef __cplusplus
    #define _chax_inlinewith(x, y, z) \
      [&] constexpr { \
        T x = y; \
        return (expr); \
      }()
  #endif
#endif

#ifndef _chax_inlinewith
  #error "unable to define `_chax_inlinewith`. requires GNU C or C++."
#endif
