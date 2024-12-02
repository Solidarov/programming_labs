/*
Завдання 3.2
    Надрукувати на екрані таблицю Піфагора.
*/

#include <iostream>
using namespace std;

int main(){
    cout << "Таблиця Додавання:" << endl;
    cout << ' ';

    for (int i = 1; i <= 10; i++){
        cout << "\t" << i;
    }
    
    cout << '\n';


    for (int i = 1; i <= 10; i++){

        cout << i;

        for (int j = 1; j <= 10; j++){
            cout << '\t' << j + i;
        }

        cout << '\n';
    }


cout << "\n\nТаблиця Множення:" << endl;
    cout << ' ';

    for (int i = 1; i <= 10; i++){
        cout << "\t" << i;
    }
    
    cout << '\n';


    for (int i = 1; i <= 10; i++){

        cout << i;

        for (int j = 1; j <= 10; j++){
            cout << '\t' << j * i;
        }

        cout << '\n';
    }

    return 0;
}