#include <iostream>

int main(){
    int num = 1;
    
    std::cout << "Таблиця ступенів двійки" << std::endl;
    
    for (int i = 0; i <= 10; i++){
        std::cout << i << "\t" << num << std::endl;
        num *= 2;
    }

    return 0; 
}