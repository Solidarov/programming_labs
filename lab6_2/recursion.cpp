#include <iostream>
#include <stdlib.h> 
using namespace std;

float powerNumber(float value, int power){
    if (value <= 0){
        return -1;

    }
    if (power == 1){
        return value;

    }else if (power == 0){
        return 1;

    }else if(power < 0){
        power = power * -1;
        value = 1 / value;
    }
    power--;
    return value * powerNumber(value, power);

}

int greatestCommonDivisor(int num1, int num2){
    num1 = abs(num1);
    num2 = abs(num2);
    if (num2 == 0){
        return num1;
    }   
    return greatestCommonDivisor(num2, num1 % num2);
}

int fibonacci(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    hanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    hanoi(n - 1, aux, to, from);
}

int main(){

    // Тест powerNumber
    cout << "Тест powerNumber:" << endl;
    cout << powerNumber(5, 3) << endl; // 125
    cout << powerNumber(5, 0) << endl; // 1
    cout << powerNumber(5, -3) << endl; // 0.008
    cout << powerNumber(-5, 3) << endl; // -1
    cout << powerNumber(5, 1) << endl; // 5


    // Тест greatestCommonDivision
    cout << "\nТест greatestCommonDivision:" << endl;
    cout << greatestCommonDivisor(252, 105) << endl; // 21
    cout << greatestCommonDivisor(405, 374) << endl; // 1
    cout << greatestCommonDivisor(45, 80) << endl; // 5
    cout << greatestCommonDivisor(30, 72) << endl; // 6
    cout << greatestCommonDivisor(50, 175) << endl; // 25

    // Тест fibonacci
    cout << "\nТест fibonacci:" << endl;
    cout << fibonacci(0) << endl; // 0
    cout << fibonacci(1) << endl; // 1 
    cout << fibonacci(2) << endl; // 1
    cout << fibonacci(3) << endl; // 2
    cout << fibonacci(4) << endl; // 3
    cout << fibonacci(5) << endl; // 5
    cout << fibonacci(6) << endl; // 8
    cout << fibonacci(7) << endl; // 13
    cout << fibonacci(8) << endl; // 21
    cout << fibonacci(9) << endl; // 34
    cout << fibonacci(10) << endl; // 55

    // Тест hanoi
    cout << "\nТест hanoi:" << endl; 
    hanoi(1, 'A', 'C', 'B');
    cout << endl;
    hanoi(2, 'A', 'C', 'B');
    cout << endl;
    hanoi(3, 'A', 'C', 'B');
    cout << endl;
    hanoi(4, 'A', 'C', 'B');
    cout << endl;
}