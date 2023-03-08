#ifndef _chax_argcount
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        /* adapted from https://stackoverflow.com/a/2124385 */
        /* and https://gustedt.wordpress.com/2010/06/08/detect-empty-macro-arguments/ */
        #define _chax_argcount(...) \
          _chax_argcount5( \
            0, \
            _chax_argcount1(__VA_ARGS__,   \
            63,62,61,60,                   \
            59,58,57,56,55,54,53,52,51,50, \
            49,48,47,46,45,44,43,42,41,40, \
            39,38,37,36,35,34,33,32,31,30, \
            29,28,27,26,25,24,23,22,21,20, \
            19,18,17,16,15,14,13,12,11,10, \
             9, 8, 7, 6, 5, 4, 3, 2, 1), \
            _chax_argcount2(__VA_ARGS__), \
            _chax_argcount2(_chax_argcount3 __VA_ARGS__), \
            _chax_argcount2(__VA_ARGS__ ()), \
            _chax_argcount2(_chax_argcount3 __VA_ARGS__ ()) \
          )
        #define _chax_argcount1( \
             _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
            _11,_12,_13,_14,_15,_16,_17,_18,_19,_20, \
            _21,_22,_23,_24,_25,_26,_27,_28,_29,_30, \
            _31,_32,_33,_34,_35,_36,_37,_38,_39,_40, \
            _41,_42,_43,_44,_45,_46,_47,_48,_49,_50, \
            _51,_52,_53,_54,_55,_56,_57,_58,_59,_60, \
            _61,_62,_63,N, ...) N
        #define _chax_argcount2(...) \
            _chax_argcount1(__VA_ARGS__,   \
             1, 1, 1, 1,                   \
             1, 1, 1, 1, 1, 1, 1, 1, 1, 1, \
             1, 1, 1, 1, 1, 1, 1, 1, 1, 1, \
             1, 1, 1, 1, 1, 1, 1, 1, 1, 1, \
             1, 1, 1, 1, 1, 1, 1, 1, 1, 1, \
             1, 1, 1, 1, 1, 1, 1, 1, 1, 1, \
             1, 1, 1, 1, 1, 1, 1, 1, 0)
        #define _chax_argcount3(...) ,
        #define _chax_argcount4(_0, _1, _2, _3, _4) _0 ## _1 ## _2 ## _3 ## _4
        #define _chax_argcount5(yes, no, _0, _1, _2, _3) _chax_argcount4(_chax_argcount6_, _0, _1, _2, _3)(yes, no)
        #define _chax_argcount6_0000(yes, no) no
        #define _chax_argcount6_0001(yes, no) yes
        #define _chax_argcount6_0010(yes, no) no
        #define _chax_argcount6_0011(yes, no) no
        #define _chax_argcount6_0100(yes, no) no
        #define _chax_argcount6_0101(yes, no) no
        #define _chax_argcount6_0110(yes, no) no
        #define _chax_argcount6_0111(yes, no) no
        #define _chax_argcount6_1000(yes, no) no
        #define _chax_argcount6_1001(yes, no) no
        #define _chax_argcount6_1010(yes, no) no
        #define _chax_argcount6_1011(yes, no) no
        #define _chax_argcount6_1100(yes, no) no
        #define _chax_argcount6_1101(yes, no) no
        #define _chax_argcount6_1110(yes, no) no
        #define _chax_argcount6_1111(yes, no) no
      #endif
    #endif
  #endif
#endif

#ifndef _chax_argcount
  #error "unable to define `_chax_argcount`. requires C99 or later (variadic macros)."
#endif
