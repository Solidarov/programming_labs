#include <iostream>
#include <cmath>

bool isPrime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    for (int i = 3; i < number; i++) {
        if (number % i == 0) return false;
    }
    
    return true;
}

int main() {

    for (int x = 0; x <= 15; ++x) {
        int result = x * x + x + 17;

        std::cout << "x = " << x << ", x^2 + x + 17 = " << result;

        if (isPrime(result)) {
            std::cout << " (просте число)" << std::endl;
        } else {
            std::cout << " (не просте число)" << std::endl;
        }
    }
    return 0;
}