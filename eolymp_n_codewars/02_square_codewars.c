#include <stdbool.h>
#include <math.h>
#include <stdio.h>

bool is_square(int n) {

    if (n<0){
      return false;
    }
  
    double square_root = sqrt(n);
    
    return square_root == (int)square_root;
}