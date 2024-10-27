#include <iostream>
using namespace std;

bool fortune(int f0, double p, int c0, int n, double inf){
      p = p / 100; inf = inf / 100;

      for (int i = 1; i < n; i++){
        f0 = f0 + f0 * p - c0;
        c0 = c0 + c0 * inf;
      }
      return f0 >= 0;
     }

int main(){
    cout << fortune(100000, 1, 2000, 15, 1) << endl; // true
    cout << fortune(100000, 1, 10000, 10, 1) << endl; // true
    cout << fortune(100000, 1, 9185, 12, 1) << endl; // false
}