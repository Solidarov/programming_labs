/*
    Завдання для варіанту №14:
        ( 27x+3    за x <= -6
    Y = { x^3-1    за -6 < x < 3
        ( x^2+1    за x >= 3
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    float x, y;

    // Введення даних
    cout << "Enter x value: ";
    cin >> x;

    // Обчислення результату
    if (x <= -6){
        y = 27 * x + 3; // для x <= -6

    }else if (x < 3){
        y = x * x * x -1; // для -6 < x < 3
    
    }else{
        y = x * x + 1; // для x >= 3
    }

    // Виведення результату
    cout << "Value of Y is: " << y << endl;

    system("pause");

}