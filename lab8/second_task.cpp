#include <iostream>

int main(){
    int days = 0, pull_hair = 1, left_hair;
    std::cout << "Скільки волосся лишилося: ";
    std::cin >> left_hair;

    while (left_hair >= pull_hair){
        left_hair = left_hair - pull_hair;
        pull_hair *= 2;
        days++;
    }
    std::cout << "Днів,скільки можна вищипувати волосся: " << days << std::endl;
    return 0;
}