/*
Програма, в якій вводяться ваш ріст(в см) та ваше ім'я,
    а на екран виводиться інформація у вигляді:
    "Привіт, <ім'я> ваш зріст <ріст_м>м <ріст_см>см"
 */

#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    
    // Виведення кирилиці
    SetConsoleCP(1251);   
	SetConsoleOutputCP(1251);
    SetConsoleOutputCP(CP_UTF8);

    int growth;
    string Name;

    // Введення даних
    cout << "Введіть ваше ім'я: ";
    cin >> Name;
    cout << "Введіть ваш ріст(в см): ";
    cin >> growth;

    // Виведення даних
    cout << "\n";
    cout << "Привіт, " << Name << " ваш зріст " 
        << growth / 100 << "м " << growth % 100 << "см" << endl;
    
    getch();
    return 0;

}