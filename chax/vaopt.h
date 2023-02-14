#include "argcount.h"

#ifndef _chax_vaopt
  #ifdef __STDC__
    #ifdef __STDC_VERSION__
      #if __STDC_VERSION__ >= 199901L
        #define _chax_vaopt(args, ...) _chax_vaopt1(_chax_argcount args, (__VA_ARGS__))
        #define _chax_vaopt1(count, emitted) _chax_vaopt2(count, emitted)
        #define _chax_vaopt2(count, emitted) _chax_vaopt2_##count emitted
        #define _chax_vaopt2_0(...)
        #define _chax_vaopt2_1(...) __VA_ARGS__
        #define _chax_vaopt2_2(...) __VA_ARGS__
        #define _chax_vaopt2_3(...) __VA_ARGS__
        #define _chax_vaopt2_4(...) __VA_ARGS__
        #define _chax_vaopt2_5(...) __VA_ARGS__
        #define _chax_vaopt2_6(...) __VA_ARGS__
        #define _chax_vaopt2_7(...) __VA_ARGS__
        #define _chax_vaopt2_8(...) __VA_ARGS__
        #define _chax_vaopt2_9(...) __VA_ARGS__
        #define _chax_vaopt2_10(...) __VA_ARGS__
        #define _chax_vaopt2_11(...) __VA_ARGS__
        #define _chax_vaopt2_12(...) __VA_ARGS__
        #define _chax_vaopt2_13(...) __VA_ARGS__
        #define _chax_vaopt2_14(...) __VA_ARGS__
        #define _chax_vaopt2_15(...) __VA_ARGS__
        #define _chax_vaopt2_16(...) __VA_ARGS__
        #define _chax_vaopt2_17(...) __VA_ARGS__
        #define _chax_vaopt2_18(...) __VA_ARGS__
        #define _chax_vaopt2_19(...) __VA_ARGS__
        #define _chax_vaopt2_20(...) __VA_ARGS__
        #define _chax_vaopt2_21(...) __VA_ARGS__
        #define _chax_vaopt2_22(...) __VA_ARGS__
        #define _chax_vaopt2_23(...) __VA_ARGS__
        #define _chax_vaopt2_24(...) __VA_ARGS__
        #define _chax_vaopt2_25(...) __VA_ARGS__
        #define _chax_vaopt2_26(...) __VA_ARGS__
        #define _chax_vaopt2_27(...) __VA_ARGS__
        #define _chax_vaopt2_28(...) __VA_ARGS__
        #define _chax_vaopt2_29(...) __VA_ARGS__
        #define _chax_vaopt2_30(...) __VA_ARGS__
        #define _chax_vaopt2_31(...) __VA_ARGS__
        #define _chax_vaopt2_32(...) __VA_ARGS__
        #define _chax_vaopt2_33(...) __VA_ARGS__
        #define _chax_vaopt2_34(...) __VA_ARGS__
        #define _chax_vaopt2_35(...) __VA_ARGS__
        #define _chax_vaopt2_36(...) __VA_ARGS__
        #define _chax_vaopt2_37(...) __VA_ARGS__
        #define _chax_vaopt2_38(...) __VA_ARGS__
        #define _chax_vaopt2_39(...) __VA_ARGS__
        #define _chax_vaopt2_40(...) __VA_ARGS__
        #define _chax_vaopt2_41(...) __VA_ARGS__
        #define _chax_vaopt2_42(...) __VA_ARGS__
        #define _chax_vaopt2_43(...) __VA_ARGS__
        #define _chax_vaopt2_44(...) __VA_ARGS__
        #define _chax_vaopt2_45(...) __VA_ARGS__
        #define _chax_vaopt2_46(...) __VA_ARGS__
        #define _chax_vaopt2_47(...) __VA_ARGS__
        #define _chax_vaopt2_48(...) __VA_ARGS__
        #define _chax_vaopt2_49(...) __VA_ARGS__
        #define _chax_vaopt2_50(...) __VA_ARGS__
        #define _chax_vaopt2_51(...) __VA_ARGS__
        #define _chax_vaopt2_52(...) __VA_ARGS__
        #define _chax_vaopt2_53(...) __VA_ARGS__
        #define _chax_vaopt2_54(...) __VA_ARGS__
        #define _chax_vaopt2_55(...) __VA_ARGS__
        #define _chax_vaopt2_56(...) __VA_ARGS__
        #define _chax_vaopt2_57(...) __VA_ARGS__
        #define _chax_vaopt2_58(...) __VA_ARGS__
        #define _chax_vaopt2_59(...) __VA_ARGS__
        #define _chax_vaopt2_60(...) __VA_ARGS__
        #define _chax_vaopt2_61(...) __VA_ARGS__
        #define _chax_vaopt2_62(...) __VA_ARGS__
        #define _chax_vaopt2_63(...) __VA_ARGS__
      #endif
    #endif
  #endif
#endif

#ifndef _chax_vaopt
  #error "unable to define `_chax_vaopt`. requires C99 or later (variadic macros)."
#endif
