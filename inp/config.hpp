#ifndef INP_CONFIG_HPP
#define INP_CONFIG_HPP
/**
* This file include -*- C++ -*- for everyone.
 *  @author Contributed by Kpangan ZkxFsd
 * (kpanganbaru@gmail.com)
 *  @file config.hh
 *  ISF (Inpianda Software Foundation)
 *  @date 08 September 2026 -> NOW
 *  @version NULL
 *  @brief  Config for anything.
 *  @copyright (C) 2026-INF (ISF) Inpianda Software Foundation,
 * Inc. This file is part and real of ISF Product. You can use
 * or modify it under ISF terms. All rights reserved.
 */
/**
 * Terms of Inpianda Software Foundation (ISF)
 * You can change it or modify it under ISF Terms.
 * You should have received a copy of GNU General Public
 * License, and a copy of (ISF) Inpianda Software
 * Foundation along with this code. Real Website :
 * Main                         : https://www.inpianda.org/index.html.
 * License                      : https://www.inpianda.org/license/license.html. 
 * Terms (ISF terms, GNU terms) : https://www.inpianda.org/terms/terms.html.  
 * - You can modify the code if you can.
 * - You can change the code under GNU License.
 * - You can use the code to your project, \ 
 *   but remember under ISF terms and GNU License.
 *   " use You can !!! " 
 */

/* Not same like define.hpp, but there a config a complex for definitions,
 * for #define not have filling anything, THROW to <define.hpp>,
 * for #define have a filling, OR have a complex function, try to THROW <config.hpp>
 ***/


//  __ATTRIBUTE__(())

// NOTHROW

#include <inpconfig.hh>

INP_INLINE_ void name(){
    
}

// no calling func, remove any bunc to highly speed and reliable
#define __ATT_LEAF __attribute__((__leaf__))

// 
#define __ATT_COLD __attribute__((__cold__))

// 
#define __ATT_HOT __attribute__((__hot__))

//
#define __ATT_INLINE inline __attribute__((__always_inline__))

//  
#define __ATT_NOTHROW __attribute__((__nothrow__))

// 
#define __ATT_NORETURN __attribute__((__noreturn__))

// 
#define __ATT_DEPR(msg) __attribute__((__deprecated__(msg)))

// 
#define __ATT_FLATTEN __attribute__((__flatten__))

// 
#define __ATT_NAKED __attribute__((__naked__))

// 
#define __ATT_NONNULL(pointer) __attribute__((__nonnull__(pointer)))

// 
#define __ATT_UNUSED __attribute__((__unused__))

// 
#define __ATT_CONST __attribute__((__const__))

// 
#define __ATT_USED __attribute__((__used__))

// 
#define __ATT_FORMAT(...) __attribute__((__format__(__VA_ARGS__)))

// 
#define __ATT_CONSTRUCTOR(priority) __attribute__((__constructor__(priority)))

// 
#define __ATT_ALIAS(type) __attribute__((__alias__(type)))

// 
// 


// __attribute__((con))


// nothrow, leaf, cold and deprecated for function
#define __ATT_NOHOT_DEPR(text)  \
__attribute__((__nothrow__, __leaf__, __cold__,__deprecated__(text) ))
#define __ATT_NOCOLD_DEPR(text)  \
__attribute__((__nothrow__, __leaf__, __hot__,__deprecated__(text) ))

#define __ATT_NOHOT_  \
__attribute__((__nothrow__, __leaf__, __cold__ ))
#define __ATT_NOCOLD_  \
__attribute__((__nothrow__, __leaf__, __hot__ ))


// sys

#define __LAPIC_BASE  0xFEE00000

#define __LAPIC_ICR_LOW         (*(volatile uint32_t*)(LAPIC_BASE + 0x300))
#define __LAPIC_ICR_HIGH        (*(volatile uint32_t*)(LAPIC_BASE + 0x310))
#define __LAPIC_SPURIOUS        (*(volatile uint32_t*)(LAPIC_BASE + 0x0F0))

// sys

#endif