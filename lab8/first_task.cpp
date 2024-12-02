#include <iostream>
#include <string>

int main(){
    std::string surname;

    std::cout << "Введіть своє прізвище: ";
    std::getline(std::cin, surname);

    std::cout << "Виведення прізвища 10 разів" << std::endl;
    for (int i = 1; i <= 10; i++){
        std::cout << i << ": "<< surname << std::endl;
    }

    return 0;
}