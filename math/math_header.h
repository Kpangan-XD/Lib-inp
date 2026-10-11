#ifndef INP_MATH_HEADER_HH
#define INP_MATH_HEADER_HH

#include "../libconfig.h"

INP_CPP_OPEN__

    INP_INLINE_ 
    INP_API_ INP_HOT_ INP_LEAF_ INP_NOTHROW_
    int pow_2_(unsigned int x__) INP_NOEXCEPT_ {
    return (1U << x__);
}
INP_CPP_CLOSE__
#endif