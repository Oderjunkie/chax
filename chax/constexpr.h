#ifndef _chax_constexpr
  #ifdef __cplusplus
    #define _chax_constexpr(decl) constexpr decl
  #endif
#endif

#ifndef _chax_constexpr
  #define _chax_constexpr(decl) const decl
#endif
