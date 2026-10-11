// ERROR

// ERROR CODE / COMMENT ERROR CODE --------------------------------------------------
/*
* code not work
* @code
* #if defined(__has_attribute) && __has_attribute(__deprecated__)
*  #if defined(__cplusplus) && (__cplusplus >= 201402) // C++14
*  #  define INP_DEPRECATED(message) [[deprecated(message)]] 
*  # elif defined(__GNUC__) || defined(__clang__) || defined(__IAR_SYSTEMS_ICC__)
*  // GCC/GNU and Clang Compiler
*  #  define INP_DEPRECATED(message) __attribute__((deprecated(message)))
*  # elif defined(_MSC_VER)
*  // MSVC Compiler for Windows
*  #  define INP_DEPRECATED(message) __declspec(deprecated(message))
*  # else
*  #  pragma message("WARNING : You need to implement INP_DEPRECATED for this compiler")
*  #  define INP_DEPRECATED(message)
*  #endif // deprecated
* #else
* // there not support deprecated message or not.
* # define INP_DEPRECATED(message)
* #endif
* @endcode
*/


// #if !defined(INP_DEPRECATED)

// # if defined(__clang__) || defined(__GNUC__)
// #  if defined(__cplusplus) && (__cplusplus >= 201402)
// #   define INP_DEPRECATED(message) [[deprecated(message)]]
// #  elif defined(__has_attribute) \
//     && __has_attribute(__deprecated__) \
// #   define INP_DEPRECATED(message) inline __attribute__((__deprecated__(message)))
// #  else
// #endif

// #endif

// #if !defined(INP_DEPRECATED)
// # if defined(__cplusplus) && (__cplusplus >= 201402)
// #  define INP_DEPRECATED(message) [[deprecated(message)]]
// # elif defined(__has_attribute) \
//     && __has_attribute(__deprecated__) \
//     || defined(__clang__) \
//     || defined(__GNUC__) \
//     || defined(__IAR_SYSTEMS_ICC__)
// #  define INP_DEPRECATED(message) __attribute__((__deprecated__(message)))
// # elif defined(_MSC_VER)
// #  define INP_DEPRECATED(message) __declspec(deprecated(message))
// # else
// #  pragma message("WARNING : INP_DEPRECATED is not supported on this compiler, try to built a INP_DEPRECATED !")
// #  define INP_DEPRECATED(message)
// # endif
// #endif  

// #if !defined(INP_DEPRECATED)
// # if defined(__clang__)

// #endif

// // #if !defined(INP_INLINE)
// // # if defined(__has_attribute) && __has_attribute(__always_inline__)
// // #  define INP_INLINE inline __attribute__((__always_inline__))
// // # elif defined(_MSC_VER)
// // #  define INP_INLINE __forceinline
// // # else
// // #  define INP_INLINE
// // # endif
// // #endif

// #if !defined(INP_INLINE)
// # if defined(__cplusplus) && (__cplusplus >= 201402) && !defined(_MSC_VER)
// #  if defined(__clang__)
// #   define INP_INLINE inline [[clang::always_inline]]
// #  elif defined(__GNUC__) 
// #   define INP_INLINE inline [[gnu::always_inline]]
// #  endif
// # elif defined(__has_attribute) \
//     && __has_attribute(__always_inline__) \
//     || defined(__clang__) \
//     || defined(__GNUC__) \
//     || defined(__IAR_SYSTEMS_ICC__)
// #  define INP_INLINE inline __attribute__((__always_inline__))
// # elif defined(_MSC_VER)
// #  define INP_INLINE inline __forceinline
// # else
// // #  pragma message("WARNING : INP_INLINE is not supported on this compiler, try to built a INP_INLINE !")
// #  define INP_INLINE inline
// # endif
// #endif

// visibility on .so code
