#ifndef INP_CONFIG_INTERLIBRARY_HH
#define INP_CONFIG_INTERLIBRARY_HH



/**
 * Config Interlibrary for this 
 * You can customise config in to whetever you use,
 * need or something.
 * Good luck.
 */

 /**
  * @brief :
  * Inpianda Version (rewrite on inpconfig.hh) (template 1.0.0)
  * 
  */
// VERSION MAJOR (0.X.X)

#  define INP_MAJOR__ 3
// VERSION MINOR (X.0.X)
#  define INP_MINOR__ 7
// VERSION PATCH (X.X.0)
#  define INP_PATCH__ 9

# include "expert/inpmacro.h"
// # include <bits/c++0x_warning.h>

// If need Intrin on specific OS (__linux__ or __WIN)
#  define INP_NEED_INTRIN__ 0 
# include "essential/inpos.h"

# include "expert/inpmacro.h"

// MACRO  
#  define TYPE_MACRO  1
#if defined(TYPE_MACRO) && (TYPE_MACRO == 1)
# include "expert/inptypemacro.h"
#endif

// DEFINE
#  define TYPE_DEF    1
#if defined(TYPE_DEF) && (TYPE_DEF == 1)
# include "expert/inptypedef.h"
#endif

// ! BAREMETAL ONLY
#  define INP_BAREMETAL_MODE__ 0
// ! DEBUG MODE
#  define INP_DEBUG_MODE__     0



/**
 * @brief for adding (libinp.so) 
 * on your code directly
 * without command.
 * @a (0) !define : You cant use some feature in library has NEED included library.
 * @b (1) define : You use library.
 *
 * @details define automaticaly.
 */
#  define INP_NEED_LIBRARY_ 1

 

// INCLUDED
// Before Config Inter Library
#include "essential/inpconfig.h"


#endif