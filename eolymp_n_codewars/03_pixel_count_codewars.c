#include <stddef.h>
#include <stdio.h>

size_t count_pixels(size_t k) {

    long long int num_of_pixels;
    long long int big_circle = 3 * (k + 2) + k;
    long long int small_circle = k * k;

    if (k == 1){
        num_of_pixels = small_circle + big_circle;
      
    }else{
        long long int inner_hole = (k - 2) * (k - 2);
        num_of_pixels = small_circle - inner_hole + big_circle;
    }

    return num_of_pixels;

}