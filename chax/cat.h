#ifndef _chax_cat
  #define _chax_cat(x, y) _chax_cat1(x, y)
  #define _chax_cat1(x, y) x##y
#endif
