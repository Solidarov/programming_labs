/*
Програма, що вводить 4-значне число від користувача 
    а потім виводить цифри числа окремо.
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main() {

    // Виведення кирилиці
    SetConsoleCP(1251);   
	SetConsoleOutputCP(1251);
    SetConsoleOutputCP(CP_UTF8);

    int number;
    
    // Введення числа
    cout << "Введіть 4-значне число: " << endl;
    cin >> number;
    
    // Виведення числа розбитого на окремі цифри
    cout << "Число розбите на окремі цифри " << endl;
    cout << number / 1000 << " " << number % 1000 / 100 << 
        " " << number % 100 / 10 << " " << number % 10 << endl;
    
    // Завершення програми
    system("pause");
    
    return 0;
}