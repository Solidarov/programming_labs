/*
Програма для 4 варіанту:
    Перевести дюйми введені користувачем в сантиметри. 
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){
    
    // Виведення кирилиці
    SetConsoleCP(1251);   
	SetConsoleOutputCP(1251);
    SetConsoleOutputCP(CP_UTF8);

    float inches, cm;

    // Введення даних
    cout << "Введiть дюйми: ";
    cin >> inches;

    // Обчислення результату
    cm = inches * 2.54;
    cout << "\n";
    cout << "Результат: " << cm << " сантиметрів" << endl;

    system("pause");
    return 0;
}