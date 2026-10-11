#ifndef INP_OS_HH
#define INP_OS_HH

#if defined(_WIN32) || defined(_WIN64)
# include <windows.h>
#  if INP_NEED_INTRIN__ == 1 && defined(INP_NEED_INTRIN__)
#   include <intrin.h>
#  endif
#endif

#if defined(__linux__) || defined(__gnu_linux__)
# include <unistd.h>
#  if INP_NEED_INTRIN__ == 1 && defined(INP_NEED_INTRIN__)
#   include <x86intrin.h>
#  endif
#endif

#endif