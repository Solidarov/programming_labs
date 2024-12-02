#include <iostream>

int main(){
    
    std::cout << "Таблиця квадратів перших 10 позитивних чисел:" << std::endl;

    for (int i = 1; i <= 10; i++){
        std::cout << i << "\t-->\t" << i*i << std::endl; 
    } 
}