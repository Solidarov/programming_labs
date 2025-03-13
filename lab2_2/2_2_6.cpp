// Варіант 14

// Завдання 4
//Дано масив розміром 4×5 з елементами цілого типу (позитивні та від’ємні).
//Визначити кількість позитивних елементів

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main() {
    const int rows = 4, cols = 5;
    int a[rows][cols];
    int i, j, count = 0;
    
    string str;
    for (i = 0; i < rows; i++){
        cout << " \nEnter the " << i + 1 << " row " << endl;
        cout << "(4 numbers separated by a space) --> ";

        getline(cin, str);
        char *p = strtok(&str[0], " ");

        for (int j = 0; j < cols; j++){
            if (p == NULL){
                a[i][j] = 0;
            }else{
                a[i][j] = atoi(p);
                p = strtok(NULL, " ");
            }

            if (a[i][j] > 0){
                count++;
            }
        }
        cout << endl;
    }

    cout << "Number of positive elements: " << count << endl;
    cout << "Array A\n";
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}