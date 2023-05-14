#include <stdio.h>
#include "template.h"

/* here we define a function `sum` using a template type T
instead of naming the function `sum` we pass this name and the 
type parameter to NAME_T
*/
#define SUM_TEMPLATE(T) \
T NAME_T(sum, T) (T* arr, size_t len) { \
    T sum = 0; \
    for (size_t i = 0; i < len; ++i) \
        sum += arr[i]; \
    return sum; \
}

// generate functions with concrete type
SUM_TEMPLATE(int);
SUM_TEMPLATE(float);

int main() {
    int a[4] = {0, 1, 2, 3};
    // call a template function with type int
    int s = CALL_T(int, sum, a, 4);
    // can also be called like that: s = int_sum(a, 4);
    printf("%d\n", s); // output: 6
}
