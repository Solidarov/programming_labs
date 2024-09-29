/*
Програма що приймає від користувача відстань S в км 
    та середню швидкість V км/год 
    і виводить час подорожі у годинах та хвилинах
*/

#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    
    // Виведення кирилиці
    SetConsoleCP(1251);   
	SetConsoleOutputCP(1251);
    SetConsoleOutputCP(CP_UTF8);

    float s, v, t;

    // Введення даних
    cout << "Введiть шлях - S(км) i швидкiсть руху - V(км/год): " << endl;
    cin >> s;
    cin >> v;
    
    // Обчислення результату
    t = s / v;

    // Виведення даних
    cout << "T(час) дорівнює: " << t << " год." << endl;
    cout << "T(час) дорівнює: " << t * 60 << " хв." << endl;

    getch();
    return 0;
}
