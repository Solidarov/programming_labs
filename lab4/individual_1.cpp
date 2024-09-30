#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int value, sum = 0;

    // введення результатів
    cout << "Enter a number: ";
    cin >> value;

    // розрахунок результатів
    if (value < 0){
        cout << "Result = " << sum << endl;
        return 0;
    }

    // цикл що додає числа кратні 3 або 5
    for (int i = 1; i < value; i++){
        
        if ((i % 3 == 0) || (i % 5 == 0)){
            sum += i;
        }
    }

    // виведення результату
    cout << "Result = " << sum << endl;
    return 0;
}