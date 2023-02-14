#ifndef _chax_eval
  #define _chax_eval(...) _chax_eval1(_chax_eval1(_chax_eval1(__VA_ARGS__)))
  #define _chax_eval1(...) _chax_eval2(_chax_eval2(_chax_eval2(__VA_ARGS__)))
  #define _chax_eval2(...) _chax_eval3(_chax_eval3(_chax_eval3(__VA_ARGS__)))
  #define _chax_eval3(...) _chax_eval4(_chax_eval4(_chax_eval4(__VA_ARGS__)))
  #define _chax_eval4(...) _chax_eval5(_chax_eval5(_chax_eval5(__VA_ARGS__)))
  #define _chax_eval5(...) __VA_ARGS__
#endif
