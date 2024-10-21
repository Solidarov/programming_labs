#include <iostream>
using namespace std;

int last_digit(long long int first_n, long long int second_n){
    first_n = first_n % 10;
    second_n = second_n % 4;

    if ((first_n == 0) || (first_n == 1) || (first_n == 5) || (first_n == 6)){
        return first_n;
    }
    long long int last_digit_arr[6][4] = {{6,2,4,8}, // for 2
                                          {1,3,9,7}, // for 3 
                                          {6,4,6,4}, // for 4
                                          {1,7,9,3}, // for 7
                                          {6,8,4,2}, // for 8
                                          {1,9,1,9}}; // for 9

    switch(first_n){
        case 2:
            return last_digit_arr[0][second_n];
            break;
        case 3:
            return last_digit_arr[1][second_n];
            break;
        case 4:
            return last_digit_arr[2][second_n];
            break;
        case 7:
            return last_digit_arr[3][second_n];
            break;
        case 8:
            return last_digit_arr[4][second_n];
            break;
        case 9:
            return last_digit_arr[5][second_n];
            break;
    }
    return 1;
}

int main(){
    long long int first_n, second_n;
    cout << "Enter the first number: ";
    cin >> first_n;
    cout << "Enter the second number: ";
    cin >> second_n;

    cout << "The last digit of " << first_n << " raised to the power of " << second_n << " is: " << last_digit(first_n, second_n) << endl;
    return 0;
}