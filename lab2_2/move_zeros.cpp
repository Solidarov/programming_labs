#include <iostream>
#include <cstring>
using namespace std;

void move_zeroes_to_end(int arr[], int size){
    int zero_idx = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[zero_idx] = arr[i];
            zero_idx++;
        }
    }

    while (zero_idx < size) {
        arr[zero_idx] = 0;
        zero_idx++;
    }
}

void print_array(int arr[], int size, string msg){
    cout << "\n" << msg << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* get_array_values(int &size){
    string str;

    cout << "Введіть кількість елементів: ";
    cin >> size;

    cin.ignore();

    int* arr = new int[size];
    cout << "Введіть "<< size <<" чисел через пробіл: ";
    getline(cin, str);

    char *p = strtok(&str[0], " ");

    for (int i = 0; i < size; i++){
        if (p == NULL){
            arr[i] = 0;
        }else{
            arr[i] = atoi(p);
            p = strtok(NULL, " ");
        }
    }
    return arr;
}

int main(){
    int size = 0;
    int *arr = get_array_values(size); 

    print_array(arr, size, "Оригинальний масив:");

    move_zeroes_to_end(arr, size);

    print_array(arr, size, "Масив після обробки:");

    delete[] arr;
    return 0;
}
