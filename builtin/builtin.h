#ifndef INP_BUILTIN_HH
#define INP_BUILTIN_HH

#include "../libconfig.h"

/**
 * @note "This Header (Builtin) Has under maintance/Construction"
 * @a On specificly No Specific Compiler mode
 * !(Clang/Intel_Compiler/GCC/MSC_VER), There will return the same @param int x
 *                               @return x;
 *
 *
 * @deprecated (ICC_COMPILERS) or Specificaly Baremetal/Compiler
 *             had not support (4 Major Compiler)
 */
#if defined(__IAR_SYSTEMS_ICC__) ||                                            \
    (defined(INP_BAREMETAL_MODE__) && INP_BAREMETAL_MODE__ == 1)
#warning "This Header In Under Construction, \
Only in There not supporting Compiler, there return the same value on (int x) (return x;). \
"
#endif

#warning

INP_CPP_OPEN__

/**
 * @brief :
 * To counting (1) Bits on Biner
 *
 *
 * @param unsigned int int x
 * @return INP_API_
 */
INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_ INP_NOTHROW_ int
builtin_popcount_(unsigned int x) INP_NOEXCEPT_ {
#if defined(__has_builtin) && __has_builtin(__builtin_popcountl)
  return __builtin_popcount(x);
#elif defined(_MSC_VER)
  return __popcnt(x);
#else
  return x;
  //  Try to repaired them.
#endif
}

/**
 * @brief :
 * To counting (1) Bits on Biner
 *
 * @param unsigned int long x
 * @return INP_API_
 */
INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_ INP_NOTHROW_ int
builtin_popcountl_(unsigned long x) INP_NOEXCEPT_ {
#if defined(__has_builtin) && __has_builtin(__builtin_popcountl)
  return __builtin_popcountl(x);
#elif defined(_MSC_VER)
  return __popcnt(x);
#else
  return x;
#endif
};

/**
 * @brief :
 * To counting (1) Bits on Biner
 *
 * @param unsigned int long long x
 * @return INP_API_
 */

INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_ INP_NOTHROW_ int
builtin_popcountll_(unsigned long long x) INP_NOEXCEPT_ {
#if defined(__has_builtin) && __has_builtin(__builtin_popcountll)
  return __builtin_popcountll(x);
#elif defined(_MSC_VER)
  return __popcnt64(x);
#else
  return x;
#endif
};

/**
 * @brief :
 * To counting (0) Bits on Biner
 * @param int popcount_zero_ (~x)
 * @param unsigned int x
 * @return INP_INLINE_
 */
INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_ INP_NOTHROW_ int
builtin_popcount_zero_(unsigned int x) INP_NOEXCEPT_ {
#if defined(__has_builtin) && __has_builtin(__builtin_popcount)
  return __builtin_popcount(~x);
#elif defined(_MSC_VER)
  return __popcnt(~x);
#else
  return x;
#endif
};

/**
 * @brief :
 * To counting (0) Bits on Biner
 *
 * @param unsigned long x
 * @return INP_API_
 */
INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_ INP_NOTHROW_ int
builtin_popcountl_zero_(unsigned long x) INP_NOEXCEPT_ {
#if defined(__has_builtin) && __has_builtin(__builtin_popcountl)
  return __builtin_popcountl(~x);
#elif defined(_MSC_VER)
  return __popcnt(~x);
#else
  return x;
#endif
};
/**
 * @brief :
 * To counting (0) Bits on Biner
 *
 * @param unsigned long long x
 * @return INP_API_
 */
INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_ INP_NOTHROW_ int
builtin_popcountll_zero_(unsigned long long x) INP_NOEXCEPT_ {
#if defined(__has_builtin) && __has_builtin(__builtin_popcountll)
  return __builtin_popcountll(~x);
#elif defined(_MSC_VER)
  return __popcnt64(~x);
#else
  return x;
#endif
};

/**
 * @brief
 *
 * @param unsigned int x
 * @return INP_INLINE_
 */
INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_ INP_NOTHROW_ int
builtin_clz_(unsigned int x) INP_NOEXCEPT_ {
  return __builtin_clz(x);
};

/**
 * @brief
 *
 * @param unsigned int x
 * @return INP_INLINE_
 */
INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_ INP_NOTHROW_ int
builtin_ctz_(unsigned int x) INP_NOEXCEPT_ {
#if defined(__has_builtin) && __has_builtin(__builtin_ctz)
  return __builtin_ctz(x);
#elif
  return x;
#endif
};

INP_CPP_CLOSE__

#endif
