#ifdef __cplusplus
    #include <iostream>
    #include <string>
#endif
#ifdef __GNUC__
    #include <stdio.h>
    #include <stdlib.h>
#endif

#include "stringize.h"

#ifdef _chax_support_colors
    #ifndef _chax_color_red
        #define _chax_color_red(x) "\e[31m" x "\e[0m"
    #endif
    #ifndef _chax_color_yellow
        #define _chax_color_yellow(x) "\e[33m" x "\e[0m"
    #endif
    #ifndef _chax_color_bold
        #define _chax_color_bold(x) "\e[1m" << x << "\e[0m"
    #endif
#endif
#ifndef _chax_support_colors
    #ifndef _chax_color_red
        #define _chax_color_red(x) "" x ""
    #endif
    #ifndef _chax_color_yellow
        #define _chax_color_yellow(x)  "" x ""
    #endif
    #ifndef _chax_color_bold
        #define _chax_color_bold(x) "" x ""
    #endif
#endif

#ifndef _chax_ut_execb
    #ifdef __cplusplus
        #define _chax_ut_execb(...) \
            for(bool _exeb = ([&](){ \
                __VA_ARGS__; \
                return true; \
            }(),true); _exeb; _exeb = false)
    #endif
#endif
#ifndef _chax_ut_execb
    #ifdef __GNUC__
        #define _chax_ut_execb(...) \
            for(bool _exeb = ({ \
                __VA_ARGS__; \
                true; \
            }),true; _exeb; _exeb = false)
    #endif
#endif

#ifndef _chax_ut_execa
    #ifdef __cplusplus
        #define _chax_ut_execa(...) \
            for(bool _exea = true; _exea; _exea = [&](){ \
                __VA_ARGS__; \
                return false; \
            }(),false)
    #endif
#endif
#ifndef _chax_ut_execb
    #ifdef __GNUC__
        #define _chax_ut_execa(...) \
            for(bool _exeb = true; _exeb; _exeb = ({ \
                __VA_ARGS__; \
                false; \
            }),false)
    #endif
#endif

#ifndef _chax_ut_decl
    #define _chax_ut_decl(v,f) \
        for(v; f; f = false)
#endif

#ifndef _chax_ut_errmsg
    #ifdef __cplusplus
        #define _chax_ut_errmsg(m) std::cout << "(" << (++_chaxns_ut_global::counter,++_fc,++_ac) << ") " << m << ", failed in line " << __LINE__ << "\n"
    #endif
#endif
#ifndef _chax_ut_errmsg
    #define _chax_ut_errmsg(m) printf("(%d) " m ", failed in line "  _chax_stringize(__LINE__) "\n",(++_fc,++_ac))
#endif

#ifndef _chax_ut_sucmsg
    #ifdef __cplusplus
        #define _chax_ut_sucmsg(m) std::cout << "(" << (++_chaxns_ut_global::counter,++_ac) << ") " << m << ", succeeded\n";
    #endif
#endif
#ifndef _chax_ut_sucmsg
    #define _chax_ut_sucmsg(m) printf("(%d) " m ", succeeded\n",++_ac)
#endif

#ifndef _chax_ut_test_case
    #ifdef __cplusplus
        #define _chax_ut_test_case(fn) \
            _chax_ut_decl(bool _f = true,_f) \
                _chax_ut_decl(long _fc = 0,_f) \
                    _chax_ut_decl(long _ac = 0,_f) \
                        _chax_ut_decl(const char* func = #fn,_f) \
                            _chax_ut_execb(std::cout << "\n>> Test " _chax_color_bold(#fn) << "\n") \
                                _chax_ut_execa(std::cout << "===> Test " << _chax_color_red(<< (_fc == 0 ? _chax_color_yellow("succeeded") : "failed " + std::to_string(_fc) + "/" + std::to_string(_ac) + " tasks") <<) << "\n") \
                                    _chax_ut_execa(_chaxns_ut_global::result[func] = std::make_tuple(_fc,_ac))
    #endif
#endif
#ifndef _chax_ut_test_case
    static inline int __chaxf_ut_testc_statusout(long _fc, long _ac) {
        printf("===> Test ");
        if(_fc == 0) 
            printf(_chax_color_yellow("succeeded") "\n");
        else 
            printf("failed %ld/%ld tasks\n",_fc,_ac);
        return 0;
    }
    #ifdef __GNUC__
        #define _chax_ut_test_case(fn) \
            decl(bool _f = true,_f) \
                decl(long _fc = 0,_f) \
                    decl(long _ac = 0,_f) \
                        decl(const char* func = #fn,_f) \
                            execb(printf("\n>> Test " _chax_color_bold(#fn) "\n")) \
                                execa(__chaxf_ut_testc_statusout())
    #endif
#endif

#ifndef _chax_ut_expr
    #define _chax_ut_expr(...) \
    do { \
        if(!(__VA_ARGS__)) _chax_ut_errmsg(_chax_color_bold("expr ") _chax_color_red(#__VA_ARGS__)); \
        else _chax_ut_sucmsg(_chax_color_bold("expr ") #__VA_ARGS__) \
    } while(false)
#endif

#ifndef _chax_ut_eq
    #define _chax_ut_eq(x,y) _chax_ut_expr((x) == (y))
#endif
#ifndef _chax_ut_neq
    #define _chax_ut_neq(x,y) _chax_ut_expr((x) != (y))
#endif
#ifndef _chax_ut_assert
    #define _chax_ut_assert(...) _chax_ut_expr((__VA_ARGS__) == true)
#endif

/* for the VIPs */
#ifdef __cplusplus
    #include <map>
    #include <tuple>
    #include <chrono>

    namespace _chaxns_ut_global {
        static inline std::map<std::string,std::tuple<long,long>> result;
        static inline std::chrono::system_clock::time_point timer;
        static inline long counter = 0;
    }

    #define _chax_ut_summary() \
        do { \
            std::cout << _chax_color_bold("\n===> Summary:") << "\n"; \
            for(auto i : _chaxns_ut_global::result) { \
                auto [j,k] = i.second; \
                std::cout << i.first << ": "; \
                if(j == 0) std::cout << _chax_color_yellow(<< (k-j) << "/" << k <<) << " passed\n"; \
                else std::cout << _chax_color_red(<< (k-j) << "/" << k << ) << " passed\n"; \
            } \
            std::cout << "> Finished " << _chaxns_ut_global::counter << " Tests in " << (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - _chaxns_ut_global::timer).count() / 1000.0) << "s\n"; \
        } while(false)
    #define _chax_ut_timer_start() \
        do { \
            _chaxns_ut_global::timer = std::chrono::system_clock::now(); \
        } while(false)
    #define __chax_ut_nothrowimpl(t) catch(t _t) { _chax_ut_errmsg(_chax_color_bold("nothrow") " cought " << _chax_color_red(<< _t <<)); f = true; }
    #define _chax_ut_nothrow(...) \
        do { \
            bool f = false; \
            try { \
                __VA_ARGS__; \
            } \
            catch(std::exception& err) { \
                f = true; \
                _chax_ut_errmsg(_chax_color_bold("nothrow") " cought \"" << err.what() << "\""); \
            } \
            __chax_ut_nothrowimpl(short) \
            __chax_ut_nothrowimpl(unsigned int) \
            __chax_ut_nothrowimpl(int) \
            __chax_ut_nothrowimpl(long) \
            __chax_ut_nothrowimpl(double) \
            __chax_ut_nothrowimpl(const char*) \
            catch(...) { \
                f = true; \
                _chax_ut_errmsg(_chax_color_bold("nothrow") " cought " _chax_color_red("<unknown>")); \
            } \
            if(!f) _chax_ut_sucmsg(_chax_color_bold("nothrow") " cought nothing") \
        } while(false)
#endif

