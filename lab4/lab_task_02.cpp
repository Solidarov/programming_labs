/*
Програма, що просить користувача ввести 2 числа,
    одержує ці числа та виводить суму, добуток і їх різницю.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float a, b;

    // Введення даних
    cout << "Input number a and b: " << endl;
    cin >>a>>b; // вводити числа через пробіл

    //виведення результатів програми
    cout << a << " + "<<b<<" = "<<(a+b)<<endl;
    cout << a << " * "<<b<<" = "<<(a*b)<<endl;
    cout << a << " - "<<b<<" = "<<(a-b)<<endl;

    getch();
    return 0;
}