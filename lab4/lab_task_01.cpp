/*
Програма, що друкує ім'я та прізвище і з нового рядка - домашню адресу.
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){
    //system("chcp 1251 >> null"); // функція для кирилиці
    SetConsoleCP(1251);   
	SetConsoleOutputCP(1251);
    SetConsoleOutputCP(CP_UTF8);

    cout << "\t\t\tІм'я та прізвище\n";
    cout << "\n";
    cout << "\t\tПовне ім'я:" << "\tНестерук Павло Романович\n";
    cout << "\n";
    cout << "\t\t\tДомашня адреса:" << "\tСонячна, 3\n";
    cout << "\n";
    getch();
    return 0;
}