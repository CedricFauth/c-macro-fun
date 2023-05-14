#ifndef C_TEMPLATE
#define C_TEMPLATE

#define NAME_T(FUNNAME, TYPENAME) TYPENAME ## _ ## FUNNAME
#define CALL_T(T, FUNNAME, ...) T ## _ ## FUNNAME(__VA_ARGS__)

#endif //C_TEMPLATE