#ifndef INP_CONFIG_HH
#define INP_CONFIG_HH

/**
* This file include -*- C++ -*- for everyone.
 *  @author Contributed by Kpangan ZkxFsd
 * (kpanganbaru@gmail.com)
 *  @file inpconfig.hh
 *  ISF (Inpianda Software Foundation)
 *  @date 12 September 2026 -> ~~~
 *  @version inp++10
 *  @brief  inp config.
 *  @copyright (C) 2026-INF (ISF) Inpianda Software Foundation,
 * Inc. This file is part and real of ISF Product. You can use
 * or modify it under ISF terms. All rights reserved.
 */
/**
 * Terms of Inpianda Software Foundation (ISF)
 * You can change it or modify it under ISF Terms.  
 * You should have received a copy of GNU Lesser General Public
 * License, and a copy of (ISF) Inpianda Software
 * Foundation along with this code. Real Website :
 * Main                         : https://www.inpianda.org/index.html.
 * License                      : https://www.inpianda.org/license/license.html. 
 * Terms (ISF terms, GNU LGPL terms) : https://www.inpianda.org/terms/terms.html.  
 * - You can modify the code if you can.
 * - You can change the code under GNU LGPL License.
 * - You can use the code to your project,  
 *   but remember under ISF terms and GNU LGPL License.
 *   " use You can !!! " 
 */

/**
 * @note Documentation on Library _inp__ are in inpconfig.hh
 * There a lot some comment to describe functional library, and some eductional.
 * Dont remove comment, and try to safety them. 
 * ! do not include files in HERE 
 * use extension "Better Comments" to better view "Comments"
 * 
 */


/**
 * Library will Support 
 * 'INP_OS_LINUX__'    *Linux    : I writing library from Linux (Fedora)
 * 'INP_OS_WINDOWS__'  *Windows  : And a some attributes, or anyhting support on Windows
 *                               (might problem on compiler, or not)
 * 'INP_OS_MAC__'      *Mac-OS   : I mean cannot support, or not?
 * 'INP_OS_BSD__'      *Open-BSD : I think will not support this.
 */



#if defined(_WIN32) || defined(_WIN64)
# define INP_OS_WINDOWS__    1
# define INP_PLATFORM_NAME__ "Windows OS"
# define INP_OS_NUMBER_LIST 1
#elif defined(__linux__) || defined(__gnu_linux__)
# define INP_OS_LINUX__      1
# define INP_PLATFORM_NAME__ "Linux OS"
# define INP_OS_NUMBER_LIST 2
#elif defined(ESP_PLATFORM) || defined(ARDUINO)
# define INP_OS_ESP32__      1
# define INP_OS_ARDUINO__      1
# define INP_PLATFORM_NAME__ "Microcontrollers Embedded"
# define INP_OS_NUMBER_LIST 3
#elif defined(INP_32_) || defined(INP_64_)
# define INP_OS__      1
# define INP_PLATFORM_NAME__ "Inpianda OS"
# define INP_OS_NUMBER_LIST 4
#else
# define INP_OS_UNKNOWN__    1
# define INP_PLATFORM_NAME__ "Unknown Platform"
# define INP_OS_NUMBER_LIST 5
#endif
    
#if defined(__x86_64__) || defined(_M_X64) // 64 bit
# define INP_ARCH_X86_64__   1
# define INP_BITS__          64
#elif defined(__i386__) || defined(_M_IX86) // 32bit
# define INP_ARCH_X86__      1
# define INP_BITS__          32
#elif defined(__arm__) || defined(_M_ARM) // arm 32bit
# define INP_ARCH_ARM__      1
# define INP_BITS__          32
#elif defined(__aarch64__) // arm 64bit
# define INP_ARCH_ARM_64__   1
# define INP_BITS__          64
#elif defined(__riscv)  // arch riscv (microcontrollers)
# define INP_ARCH_RISCV__    1
#  if __riscv_xlen == 64
#   define INP_BITS__        64
#  else
#   define INP_BITS__        32
#  endif
#else // fallback
# define INP_BITS__          32
#endif

#if !defined(TYPE_DEF)
#  define TYPE_DEF 1
#endif


#if !defined(TYPE_MACRO)
#  define TYPE_MACRO 1
#endif


// __STDC_VERSION__
/**
 * Inpianda Version 
 * '_inp__'
 * 'INP_MAJOR__' : Major Version
 * 'INP_MINOR__' : Minor Version
 * 'INP_PATCH__' : Patch Version
 */



#if !defined(INP_MAJOR__)
# define INP_MAJOR__ 1
#endif

#if !defined(INP_MINOR__)
# define INP_MINOR__ 0
#endif

#if !defined(INP_PATCH__)
# define INP_PATCH__ 0
#endif

// Inpianda Full version
// 
#if !defined(INP_VERSION__)
// for version to int (10.000) or not
# define INP_VERSION__         (INP_MAJOR__ * 10000 + INP_MINOR__ * 100 + INP_PATCH__)
#endif

#define INP_STR_HELPER__(x)    #x
#define INP_STR__(x)           INP_STR_HELPER__(x)

// for version to string
#define INP_VERSION_STRING__   INP_STR__(INP_MAJOR__) "." INP_STR__(INP_MINOR__) "." INP_STR__(INP_PATCH__)
#define INP_VERSION_INTEGER__  INP_STR__(INP_MAJOR__)     INP_STR__(INP_MINOR__)     INP_STR__(INP_PATCH__)

#if !defined(_inp__)
// master of inp (library)
# define _inp__                INP_VERSION_INTEGER__

#endif

#if !defined(INP_NEED_SWITCH_STRING)
# define INP_NEED_SWITCH_STRING 1
#endif

/**
 * Hierarki for _inp__ variabel 
 *  @a _A__            : TOP (_inp__)
 *  @b A__             : for sensitive function/macro
 *  @c A_              : middle sensitive 
 *  @e INP_(func)      : realm function/macro anything in INP
 */


/*** Documentation
 * C++ Version (C++98->C++!!)
 * 'C++98/C++03'  -> 199711L 
 * 'C++11'        -> 201103L <-> MIDDLE
 * 'C++14'        -> 201402L
 *                  - [[attribute]] on C++14, 
                      if c++14 or later, 
                      use syntax this.
 * 'C++17'        -> 201703L
 * 'C++20'        -> 202002L
 * 'C++23'        -> 202302L  
 *
 * C Version (C90->C!!)
 * 'C89/C90'      -> 199409L
 * 'C99'          -> 199901L
 * 'C11'          -> 201112L  <-> MIDDLE
 * 'C17'          -> 201710L
 * 'C23'          -> 202311L
 *
 * Compiler
 * GNU :
 *    '__GNUC__'    = Major
 * '__GNUC_MINOR__' = Minor
 * 
 *
 * Clang :
 *  '__clang__'
 * 
 *
 * IAR (IoT && Microcontrollers) :
 *  '__IAR_SYSTEMS_ICC__' = for compiler IAR (IoT)
 * 
 *
 * MSVC (Microsoft Visual C++) :
 * '_MSC_VER' 
 *
 * Intel Compiler :
 * '__INTEL_COMPILER'
 */

 #if defined(__cplusplus)
 # if (__cplusplus < 201103L)
 #  define INP_CPP_COMPILER_LEGACY__ 1
 #  pragma message("This Compiler to old (This < C++11, Try to upgrade, or use Deprecated/Old Function!)")
 # elif (__cplusplus >= 201103L && __cplusplus < 201703L)
 #  define INP_CPP_COMPILER_TRANSITION__ 1
 # elif (__cplusplus >= 201703L)
 #  define INP_CPP_COMPILER_MODERN__ 1
 # endif
 #endif

 #if defined(__STDC__)
 # if (__STDC_VERSION__ < 201112L)
 #  define INP_C_COMPILER_LEGACY__ 1
 # elif (__STDC_VERSION__ >= 201112L && __STDC_VERSION__ < 201710L)
 #  define INP_C_COMPILER_TRANSITION__ 1
 # elif (__STDC_VERSION__ >= 201710L)
 #  define INP_C_COMPILER_MODERN__ 1
 # endif
 #endif

//  I swear, this Library will support this.. (5 Compiler)
//  - __clang__           : Clang Compiler (LLVM)      
    #define INP_CLANG_      __clang__     
// /                        - intel_compiler can support clang 
//                            because they compiler writing in clang.
//  - __GNUC__            : GNU Compiler (GCC?) 
    #define INP_GNUC_       __GNUC__     
// /                        - intel_compiler can support gnuc to (OLD), 
//                          - intel can support both (clang, gnuc) for (OLD)
//  - _MSC_VER            : Microsoft Visual C++ Compiler  
    #define INP_MSC_VER_    _MSC_VER     
// /                        - MSC_VER is very strict, 
//                          - they cannot support __attribute__, 
//                          - and very annoying, 
//                          - try to select on this compiler !
//  - __IAR_SYSTEMS_ICC__ : ICC (Microcontrollers)    
    #define INP_IAR_        __IAR_SYSTEMS_ICC__     
// /                        - IAR can support gnuc attribute (OLD) but not anything, 
//                          - but not support on clang / gnu (NEW) attributes. 
//                          - try on IAR to use a attribute GNUC for selective. 
//                          - or use #pragma on selective IAR.
//  - __INTEL_COMPILER    : Intel Compiler (LLVM)    
    #define INP_INTEL_      __INTEL_COMPILER     
// /                        - intel support gnuc attributes (and support clang too) (OLD) ?,
//                          - intel_compiler can manipulation they are clang/gnuc,
//                          - but use selective for spesific attribute [[gnu:: || clang::]] (NEW)
#if !defined(INP_API_)
# if defined(__has_attribute) && __has_attribute(__visibility__)
#  define INP_API_ __attribute__((__visibility__("default")))
# else
#  define INP_API_
# endif
#endif

#if !defined(INP_HIDDEN_)
# if defined(__has_attribute) && __has_attribute(__visibility__)
#  define INP_HIDDEN_ __attribute__((__visibility__("hidden")))
# else
#  define INP_HIDDEN_
# endif
#endif

#if defined(INP_NEED_LIBRARY_) && (INP_NEED_LIBRARY_ == 1)
# if defined(__clang__) || defined(_MSC_VER) 
#   pragma comment(lib, "inp")
# endif
#endif

#if defined(__cplusplus)

#endif

/**
 * in playing preprocessing C/++, we have 2 methods
 * 1. preprocessing only not space on # and (define, if, else, elif)
 * @code
 * #if defined(__cplusplus)
 * #define CPLUS_PLUS // there not have space on # and define !
 * #endif 
 * @endcode  
 * 2. preprocessing a good and have space on # and (define, if, else, elif)
 * @code
 * #if defined(__cplusplus)
 * # define CPLUS_PLUS // have space on # and define !
 * #endif
 * @endcode  
 */

/** 
//  On __attribute__ or attribute for C/++
// if i not create a selective condition if (another compiler && or not compiler GNUC/GCC)
// to create a special attribute for another compiler,
// will be get a define attribute nothing.
// i know, a programmer will not selective this,
// but you can add, or you see 3 condition. 
// @a - you can add implement for selective attribute
// or
// @b - i created a new define for another compiler
// or
// @c - you will get nothing on define for another compiler.


// ! ATTENTION !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// ! DO NOT TRY  THIS (keyword [[attributes]]) <- FALSE
// TODO:    TRY  A    ([[attributes]] keyword) <- TRUE
**/

/** References of MSVC
 * @note LIST References of MSVC __declspec()
 * Only 25 attributes
 * 1   - align(#)
 * 2   - allocate("segname")
 * 3   - appdomain
 * 4   - dllexport
 * 5   - dllimport
 * 6   - jitintrinsic
 * 7   - naked
 * 8   - noalias
 * 9   - noinline
 * 10  - noreturn
 * 11  - nothrow
 * 12  - novtable
 * 13  - process
 * 14  - property(...)
 * 15  - restrict
 * 16  - safebuffers
 * 17  - selectany
 * 18  - threaduuid("...") 
 * 19  - allocator
 * 20  - code_seg("segname")
 * 21  - deprecated
 * 22  - empty_bases
 * 23  - no_sanitize_address
 * 24  - spectre(...)
 * 25  - thread
 */

/** References of GNUC (1)
 * @note LIST References of GNUC
 *       for Common Function Attributes
 * Only 42 attributes
 * 1   - alias("target")
 * 2   - alloc_size(#, ...)
 * 3   - always_inline
 * 4   - artificial
 * 5   - cold
 * 6   - const
 * 7   - constructor
 * 8   - constructor(#)
 * 9   - deprecated
 * 10  - deprecated("msg")
 * 11  - destructor
 * 12  - destructor(#)
 * 13  - error("msg")
 * 14  - externally_visible
 * 15  - flatten
 * 16  - format(type, index, first)
 * 17  - format_arg(index)
 * 18  - gnu_inline
 * 19  - hot
 * 20  - leaf
 * 21  - malloc
 * 22  - no_address_safety_analysis
 * 23  - no_instrument_function
 * 24  - no_profile_instrument_function
 * 25  - no_split_stack
 * 26  - noinline
 * 27  - nonnull(...)
 * 28  - noreturn
 * 29  - nothrow
 * 30  - optimize(...)
 * 31  - pure
 * 32  - returns_nonnull
 * 33  - returns_twice
 * 34  - sentinel
 * 35  - unused
 * 36  - used
 * 37  - visibility("type")
 * 38  - warn_unused_result
 * 39  - warning("msg")
 * 40  - weak
 * 41  - weakref
 * 42  - weakref("target")
 */

/** References of GNUC (2)
 * @note LIST References of GNUC
 *       for Variable & Type Attributes
 * Only 20 attributes
 * 1   - aligned(#)
 * 2   - cleanup(function)
 * 3   - common
 * 4   - deprecated
 * 5   - empty_bases
 * 6   - may_alias
 * 7   - mode(mode_name)
 * 8   - ms_struct
 * 9   - nocommon
 * 10  - no_sanitize_address
 * 11  - packed
 * 12  - scalar_storage_order("order")
 * 13  - section("name")
 * 14  - selectany
 * 15  - tls_model("model")
 * 16  - transparent_union
 * 17  - uninitialized
 * 18  - unused
 * 19  - vector_size(#)
 * 20  - warn_if_not_aligned(#)
 */

/** References of GNUC (3)
 * @note LIST References of GNUC
 *       for Target-Specific Attributes (x86, ARM, AVR, MIPS)
 * Only 56 attributes
 * 1   - bnd_legacy
 * 2   - bnd_instrument
 * 3   - callee_pop_aggregate_return(#)
 * 4   - callee_pop_return_expr
 * 5   - cdecl
 * 6   - dllexport
 * 7   - dllimport
 * 8   - far
 * 9   - fastcall
 * 10  - force_align_arg_pointer
 * 11  - ifunc("resolver")
 * 12  - init_priority(#)
 * 13  - interrupt
 * 14  - interrupt_handler
 * 15  - io(#)
 * 16  - long_call
 * 17  - mips16
 * 18  - ms_abi
 * 19  - naked
 * 20  - near
 * 21  - no_icf
 * 22  - no_sanitize
 * 23  - no_sanitize_coverage
 * 24  - no_sanitize_thread
 * 25  - no_sanitize_undefined
 * 26  - no_stack_limit
 * 27  - no_stack_protector
 * 28  - noplt
 * 29  - nosave_low_regs
 * 30  - OS_main
 * 31  - OS_task
 * 32  - pcs("type")
 * 33  - progmem
 * 34  - regparm(#)
 * 35  - regsave
 * 36  - rendezvous
 * 37  - resbank
 * 38  - safe_delay
 * 39  - short_call
 * 40  - shortcall
 * 41  - signal
 * 42  - simd
 * 43  - spu_vector
 * 44  - sseregparm
 * 45  - stack_protect
 * 46  - stdcall
 * 47  - strub(...)
 * 48  - sysv_abi
 * 49  - target(...)
 * 50  - target_clones(...)
 * 51  - thiscall
 * 52  - tiny
 * 53  - trap_exit
 * 54  - vector
 * 55  - versionboot
 * 56  - vfp_type
 */

/**
 * a list compiler attribute ONLY support GNUC/GCC, clang, or IAR. 
 * only SINGLE attributes support GNUC. and clang support full on this special attribute
 *  References for support (only GNUC or Clang (clang will support ALL to GNUC)) :
 *   - pure
 *   - hot
 *   - cold
 *   - leaf
 *   - naked
 *   - const

 *   - noreturn
 *   - nodiscard
 */

#if !defined(INP_PURE_)
# if defined(__has_attribute) && __has_attribute(__pure__)
#  define INP_PURE_ __attribute__((__pure__))
# else
#  define INP_PURE_
# endif
#endif 

#if !defined(INP_HOT_)
# if defined(__has_attribute) && __has_attribute(__hot__)
#  define INP_HOT_ __attribute__((__hot__))
# else
#  define INP_HOT_
# endif
#endif

#if !defined(INP_COLD_)
# if defined(__has_attribute) && __has_attribute(__cold__)
#  define INP_COLD_ __attribute__((__cold__))
# else
#  define INP_COLD_
# endif
#endif

#if !defined(INP_LEAF_)
# if defined(__has_attribute) && __has_attribute(__leaf__)
#  define INP_LEAF_ __attribute__((__leaf__))
# else
#  define INP_LEAF_
# endif
#endif



#if !defined(INP_FLATTEN_)
# if defined(__has_attribute) && __has_attribute(__flatten__)
#  define INP_FLATTEN_ __attribute__((__flatten__))
# else
#  define INP_FLATTEN_
# endif
#endif

#if !defined(INP_NAKED_)
# if defined(__has_attribute) && __has_attribute(__naked__)
#  define INP_NAKED_ __attribute__((__naked__))
# else
#  define INP_NAKED_
# endif
#endif

#if !defined(INP_NONNULL_)
# if defined(__has_attribute) && __has_attribute(__nonnull__)
#  define INP_NONNULL_(...) __attribute__((__nonnull__(__VA_ARGS__)))
# else
#  define INP_NONNULL_
# endif
#endif

#if !defined(INP_NOTHROW_)
# if defined(__has_attribute) && __has_attribute(__nothrow__) && (!defined(__cplusplus) || (__cplusplus < 201103L))
#  define INP_NOTHROW_ __attribute__((__nothrow__))
# else
#  define INP_NOTHROW_
# endif 
#endif

#if !defined(INP_NOEXCEPT_)
# if defined(__cplusplus) && (__cplusplus >= 201103L)
#  define INP_NOEXCEPT_ noexcept
# else
#  define INP_NOEXCEPT_
# endif 
#endif

/**
 * a compiler attribute (GCC/GNUC) to SUPPORT multicompiler, with selective
 * preprocessing, and if there not support, we have no return ! 
 * 
 *  5 Compiler (clang, gnuc, intel_compiler, iac-iot, msvc_ver windows) TO SUPPORT on same attribute !
 *  References for support :
 *
 *  *     ATTRIBUTE      \\     GCC      \\      CLANG      ||      MSVC      ||      IAR      \\ INTEL_COMPILER              
 *  *    deprecated      \\   SUPPORT    \\     SUPPORT     \\   SUPPORT      \\ SUPPORT       \\ SUPPORT           * Work on this header.                   
 *  *    always_inline   \\              \\                 \\                \\               \\                                
 *  *                    \\              \\                 \\                \\               \\                                
 *  *                    \\              \\                 \\                \\               \\                                
 *  *                    \\              \\                 \\                \\               \\                                
 *  *                    \\              \\                 \\                \\               \\                                
 *  *                    \\              \\                 \\                \\               \\                                
 *  *                    \\              \\                 \\                \\               \\                                
 *  *                    \\              \\                 \\                \\               \\                                
 *  *                    \\              \\                 \\                \\               \\                                
 *  *     ATTRIBUTE      \\     GCC      \\      CLANG      ||      MSVC      ||      IAR      \\ INTEL_COMPILER                  
 */

#if !defined(INP_DEPRECATED_)

#  if defined(__clang__) || defined(__INTEL_COMPILER)
#    if defined(__cplusplus) && (__cplusplus >= 201402)
#      define INP_DEPRECATED_(message) [[deprecated(message)]]
#    elif defined(__has_attribute) && __has_attribute(__deprecated__)
#      define INP_DEPRECATED_(message) __attribute__((__deprecated__(message)))
#    else
#      define INP_DEPRECATED_(message)
#    endif

#  elif defined(__GNUC__)
#    if defined(__cplusplus) && (__cplusplus >= 201402)
#      define INP_DEPRECATED_(message) [[deprecated(message)]]
#    elif defined(__has_attribute) && __has_attribute(__deprecated__)
#      define INP_DEPRECATED_(message) __attribute__((__deprecated__(message)))
#    else
#      define INP_DEPRECATED_(message)
#    endif

#  elif defined(_MSC_VER)
#    if defined(__cplusplus) && (__cplusplus >= 201402)
#      define INP_DEPRECATED_(message) [[deprecated(message)]]
#    else
#      define INP_DEPRECATED_(message) __declspec(deprecated(message))
#    endif

#  elif defined(__IAR_SYSTEMS_ICC__)
#    if defined(__cplusplus) && (__cplusplus >= 201402)
#      define INP_DEPRECATED_(message) [[deprecated(message)]]
#    elif defined(__has_attribute) && __has_attribute(__deprecated__)
#      define INP_DEPRECATED_(message) __attribute__((__deprecated__(message)))
#    else
#      define INP_DEPRECATED_(message)
#    endif

#  else
#    pragma message("WARNING: INP_DEPRECATED_ is not supported on this compiler.")
#    define INP_DEPRECATED_(message)
#  endif
#endif


// INLINE
#if !defined(INP_INLINE_)

#  if defined(__clang__) || defined(__INTEL_COMPILER)
#    if defined(__cplusplus) && (__cplusplus >= 201402)
#      define INP_INLINE_ [[clang::always_inline]] inline
#    elif defined(__has_attribute) && __has_attribute(__always_inline__)
#      define INP_INLINE_ __attribute__((__always_inline__)) inline
#    else
#      define INP_INLINE_ inline
#    endif

#  elif defined(__GNUC__)
#    if defined(__cplusplus) && (__cplusplus >= 201402)
#      define INP_INLINE_ [[gnu::__always_inline__]] inline
#    elif defined(__has_attribute) && __has_attribute(__always_inline__)
#      define INP_INLINE_ __attribute__((__always_inline__)) inline
#    else
#      define INP_INLINE_ inline
#    endif

    // List Compiler has no complex attribute -> 

#  elif defined(_MSC_VER)
#      define INP_INLINE_ __forceinline

#  elif defined(__IAR_SYSTEMS_ICC__)
#    if defined(__has_attribute) && __has_attribute(__always_inline__)
#      define INP_INLINE_ __attribute__((__always_inline__)) inline
#    else
#      define INP_INLINE_ _Pragma("inline=forced") inline
#    endif

#  else
// #    pragma message("WARNING: INP_INLINE_ is not supported on this compiler.")
#    define INP_INLINE_ inline
#  endif
#endif

// NO INLINE
#if !defined(INP_NOINLINE_)

#  if defined(__clang__) || defined(__INTEL_COMPILER)
#    if defined(__cplusplus) && (__cplusplus >= 201402)
#      define INP_NOINLINE_ [[clang::noinline]] 
#    elif defined(__has_attribute) && __has_attribute(__noinline__)
#      define INP_NOINLINE_ __attribute__((__noinline__)) 
#    else
#      define INP_NOINLINE_ 
#    endif

#  elif defined(__GNUC__)
#    if defined(__cplusplus) && (__cplusplus >= 201402)
#      define INP_NOINLINE_ [[gnu::noinline]] 
#    elif defined(__has_attribute) && __has_attribute(__noinline__)
#      define INP_NOINLINE_ __attribute__((__noinline__)) 
#    else
#      define INP_NOINLINE_ 
#    endif

    // List Compiler has no complex attribute -> 

#  elif defined(_MSC_VER)
#    if defined(__cplusplus) && (__cplusplus >= 201703)
#      define INP_NOINLINE_ [[msvc::noinline]]
#    else
#      define INP_NOINLINE_ __declspec(noinline)
#    endif

#  elif defined(__IAR_SYSTEMS_ICC__)
#    if defined(__has_attribute) && __has_attribute(__noinline__)
#      define INP_NOINLINE_ __attribute__((__noinline__)) 
#    else
#      define INP_NOINLINE_ _Pragma("inline=never") 
#    endif

#  else
// #    pragma message("WARNING: INP_NOINLINE_ is not supported on this compiler.")
#    define INP_NOINLINE_ 
#  endif
#endif
#endif // CLOSE inpconfig.hh
