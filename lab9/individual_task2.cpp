#include <iostream>
#include <cmath>

int main() {
    double initial_distance = 10.0; // Дистанція в перший день
    double day_distance = 1.1; // Щоденне збільшення на 10%
    int days = 7;

    // Формула для суми геометричної прогресії
    double total_distance = initial_distance * (1 - std::pow(day_distance, days)) / (1 - day_distance);

    std::cout << "Сумарний шлях за 7 днів: " << total_distance << " км" << std::endl;

    return 0;
}