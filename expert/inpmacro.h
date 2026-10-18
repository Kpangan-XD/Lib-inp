#ifndef INP_MACRO_HH
#define INP_MACRO_HH

#if defined(__cplusplus)

# define INP_C_OPEN__    extern "C" { 

# define INP_C_CLOSE__   } 

# define INP_CPP_OPEN__  namespace inp {

# define INP_CPP_CLOSE__ }

#else 

# define INP_C_OPEN__
# define INP_C_CLOSE__

# define INP_CPP_OPEN__
# define INP_CPP_CLOSE__

#endif

#if defined(INP_NEED_SWITCH_STRING) && (INP_NEED_SWITCH_STRING == 1)
# define inp_switch(x)   \
         std::string & _s = x; \
         if(0)
         
# define inp_case(y) \
         } else if(_s == y) {

# define inp_default \
         } else {


#endif


#endif // cpluspluss