#ifndef INP_TYPE_DEF_HH
#define INP_TYPE_DEF_HH


__extension__ typedef signed char          inp_int8_t_;
__extension__ typedef unsigned char        inp_uint8_t_;

__extension__ typedef short                inp_int16_t_;
__extension__ typedef unsigned short       inp_uint16_t_;

__extension__ typedef int                  inp_int32_t_;
__extension__ typedef unsigned int         inp_uint32_t_;

# if defined(__X86_64__) || defined(__aarch64__)

__extension__ typedef long long            inp_int64_t_;
__extension__ typedef unsigned long long   inp_uint64_t_;

# endif





#endif