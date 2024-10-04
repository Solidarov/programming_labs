/*
    Завдання для варіанту №14
*/

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main(){

    const double a = 0.5, b = 0.7, c = 3.4;
    double x, y;

    // Введення даних
    cout << "Enter x value: ";
    cin >> x;

    // Обчислення результату
    if (x < a){
        double sin_square = sin(b * b * x) * sin(b * b * x);
        y = c * sin_square + log(c * x + a); // c * sin^2(b^2 * x) + ln(cx + a)

    } else if (x < b){
        y = a + log(b * x) - sin(c*x); // a + ln(b * x) - sin(cx)

    }else {
        y = cos(a + b * x) + c * x * x;
        y = fabs(y); // |cos(a + bx) + c * x^2| 
    }

    // Виведення результату
    cout << "Value of Y is: " << y << endl;

    system("pause");
}
