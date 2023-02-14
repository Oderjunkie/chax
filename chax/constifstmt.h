#ifndef _chax_constifstmt
  #ifdef __GNUC__
    #define _chax_constifstmt1(...) __VA_ARGS__
    #define _chax_constifstmt(x, y, z) __builtin_choose_expr(x, ({_chax_constifstmt1 y}), ({_chax_constifstmt1 z}))
  #endif
#endif

#ifndef _chax_constifstmt
  #ifdef __cplusplus
    #define _chax_constifstmt1(...) __VA_ARGS__
    #define _chax_constifstmt(x, y, z) \
      [&] constexpr { \
        if constexpr (x) { _chax_constifstmt1 y } \
        else { _chax_constifstmt1 z } \
      }()
  #endif
#endif

#ifndef _chax_constifstmt
  #define _chax_constifstmt1(...) __VA_ARGS__
  #define _chax_constifstmt(x, y, z) if (x) { \
    _chax_constifstmt1 y \
  } else do { \
    _chax_constifstmt1 z \
  } while (0)
#endif
