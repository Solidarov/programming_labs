#include <stddef.h>

size_t count_pixels(size_t k) {

    long long int result = 0;

    if ((k == 1)||(k==2)){
        result = k*k + 3*(k+2)+k;
    }else{
        long long int n = (k-2) * (k-2);
        result = (k*k -n) + 3*(k+2)+k;
    }

    return result;

}