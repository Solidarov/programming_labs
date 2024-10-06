/*
Завдання для варіанту №14:
    Ввести координати точки B (x та y) і визначити: чи належить ця точка 
    кривій f(x) = 6cos^2x – 0.25x^5 + 3.2x^2 – 2.7 з припустимою похибкою
    eps = 10^–3 (тобто |f(x) – y| < eps). 
    Відповідь вивести у вигляді повідомлення
*/

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main(){

    const double eps = 1e-3;
    double B[2], f_x; // Масив B(x, y) та f(x)

    // Введення координат точки B
    cout << "Enter x and y (divide by space): ";
    cin >> B[0] >> B[1];

    // Обчислення значення f(x)
    f_x = 6 * pow(cos(B[0]), 2) - 0.25 * pow(B[0], 5) + 3.2 * pow(B[0], 2) - 2.7;

    // Порівняння f(x) з y
    if (abs(f_x - B[1]) < eps){
        cout << "\n\nPoint B(" << B[0] << ", " << B[1] << ") belongs to the curve f(x)" << endl;
    
    }else{
        cout << "\n\nPoint B(" << B[0] << ", " << B[1] << ") does not belongs to the curve f(x)" << endl;
    }

    // Виведення координат точки B після обчислення f(x)
    cout << "The coordinates of point B: (" << B[0] << ", " << f_x << ")" << endl;

    system("pause");
    
}