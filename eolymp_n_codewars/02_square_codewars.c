#include <stdbool.h>
#include <math.h>

bool is_square(int n) {

    if (n<0){
      return false;
    }
  
    double square_root = sqrt(n);
    
    if (square_root == (int)square_root){
      return true;
    
    }else{
      return false;
    }
}