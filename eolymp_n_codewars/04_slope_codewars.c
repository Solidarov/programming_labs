#include <stdbool.h>
#include <stdio.h>

typedef struct Double_Point_Coordinates {
    double x;
    double y;
} point;

//  *is_slope will be initialized as `true`
//  for non-slope result, set it to `false`

double get_slope(point a, point b, bool *is_slope) {
  
    double result = 0.0;

    if (((a.x==b.x) && (a.y==b.y)) || (a.x==b.x)){
      *is_slope = false;
      
    }else {
      result = (b.y - a.y) / (b.x - a.x);
    
    }
  
    return result; 
}