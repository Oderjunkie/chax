#ifndef _chax_asmexpr
  #ifdef __cplusplus
    #define _chax_asmexpr(src) [&](){asm(src); return 0;}()
  #endif
#endif

#ifndef _chax_asmexpr
  #ifdef __GNUC__
    #define _chax_asmexpr(src) ({__asm__(src); 0;})
  #endif
#endif

#ifndef _chax_asmexpr
  #error "unable to define `_chax_asmexpr`. requires GNU C or C++."
#endif