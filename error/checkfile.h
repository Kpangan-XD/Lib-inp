#ifndef INP_CHECK_ERROR
#define INP_CHECK_ERROR

/**
* This file include -*- C++ -*- for everyone.
 *  @author Contributed by Kpangan ZkxFsd
 * (kpanganbaru@gmail.com)
 *  @file checkfile.h
 *  ISF (Inpianda Software Foundation)
 *  @date 11 October 2026  -> ~~~
 *  @version 1.0
 *  @brief To.
 *  @copyright (C) 2026-INF (ISF) Inpianda Software Foundation,
 * Inc. This file is part and real of ISF Product. You can use
 * or modify it under ISF terms. All rights reserved.
 */
/**
 * Terms of Inpianda Software Foundation (ISF)
 * You can change it or modify it under ISF Terms.
 * You should have received a copy of GNU LGPL General Public
 * License, and a copy of (ISF) Inpianda Software
 * Foundation along with this code. Real Website :
 * Main                         : https://www.inpianda.org/index.html.
 * License                      : https://www.inpianda.org/license/license.html. 
 * Terms (ISF terms, GNU LGPL terms) : https://www.inpianda.org/terms/terms.html.  
 * - You can modify the code if you can.
 * - You can change the code under GNU LGPL License.
 * - You can use the code to your project, \ 
 *   but remember under ISF terms and GNU LGPL License.
 *   " use You can !!! " 
 */

#if \
defined(__IAR_SYSTEMS_ICC__)\
||\
(defined(INP_BAREMETAL_MODE__) && INP_BAREMETAL_MODE__ == 1)

#warning \
"This Header In Under Construction, \
Only in There not supporting Compiler, there return the same value on (int x) (return x;). \
"

#endif

#endif
