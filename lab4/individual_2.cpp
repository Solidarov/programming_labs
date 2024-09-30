#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    double x, y;
    cout << "Enter x value: ";
    cin >> x;

    if (x < -3){
        y = 2 * x + 2;

    }else if (x <= 0){
        y = 2 * x - 2;

    }else if (x > 0){
        y = x * x;
    }

    cout << "y = " << y << endl;

    system("pause");
    return 0;
    
}