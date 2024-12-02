#include <iostream>
#include <string>
#include <set> // бібліотека для роботи з set (структура даних, яка зберігає унікальні значення)

bool hasUniqueDigits(int number) {
    std::string numStr = std::to_string(number);

    std::set<char> digits(numStr.begin(), numStr.end()); // зберігає тільки унікальні значення

    return digits.size() == numStr.size(); // якщо всі унікальні, то розмір set дорівнює розміру рядка
}

int main() {
    for (int i = 100; i <= 999; ++i) {
        if (hasUniqueDigits(i)) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}