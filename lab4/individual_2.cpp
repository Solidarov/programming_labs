#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    double x, y;

    // введення результатів
    cout << "Enter x value: ";
    cin >> x;

    // розрахунок
    if (x < -3){
        y = 2 * x + 2;

    }else if (x <= 0){
        y = 2 * x - 2;

    }else if (x > 0){
        y = x * x;
    }

    // виведення результату
    cout << "y = " << y << endl;
    system("pause");
    return 0;
    
}