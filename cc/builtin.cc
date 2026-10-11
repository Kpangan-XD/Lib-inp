
#include "../builtin/builtin.h"
#include "../essential//inpconfig.h"

namespace inp {

    INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_  
    INP_NOTHROW_
    int builtin_popcount_(unsigned int x) INP_NOEXCEPT_ {
        return __builtin_popcount(x);
    }

    INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_  
    INP_NOTHROW_
    int builtin_popcountl_(unsigned long x) INP_NOEXCEPT_ {
        return __builtin_popcountl(x);
    }

    INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_  
    INP_NOTHROW_
    int builtin_popcountll_(unsigned long long x) INP_NOEXCEPT_ {
        return __builtin_popcountll(x);
    }

    INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_  
    INP_NOTHROW_
    int builtin_popcount_zero_(unsigned int x) INP_NOEXCEPT_ {
        return __builtin_popcount(~x);
    }

    INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_  
    INP_NOTHROW_
    int builtin_popcountl_zero_(unsigned long x) INP_NOEXCEPT_ {
        return __builtin_popcountl(~x);
    }

    INP_INLINE_ INP_API_ INP_LEAF_ INP_HOT_  
    INP_NOTHROW_
    int builtin_popcountll_zero_(unsigned long long x) INP_NOEXCEPT_ {
        return __builtin_popcountll(~x);
    }
}
