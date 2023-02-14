#ifndef _chax_constifexpr
  #ifdef __GNUC__
    #define _chax_constifexpr(x, y, z) __builtin_choose_expr(x, y, z)
  #endif
#endif

#ifndef _chax_constifexpr
  #ifdef __cplusplus
    #define _chax_constifexpr(x, y, z) \
      [&] constexpr { \
        if constexpr (x) { return (y); } \
        else { return (z); } \
      }()
  #endif
#endif

#ifndef _chax_constifexpr
  #define _chax_constifexpr(x, y, z) ((x) ? (y) : (z))
#endif
