#include <iostream>
#include <string>

int main() {
    int n_requests; // кількість запитів
    std::cout << "Enter the number of requests: ";
    std::cin >> n_requests;

    int volume = 7; // початковий рівень гучності
    std::string command;

    std::cout << "Enter the command (Turn up/Turn off): ";
    for (int i = 0; i <= n_requests; ++i) {

        
        std::getline(std::cin, command);

        if (command == "Turn up" && volume < 10) {
            volume++;

        } else if (command == "Turn off" && volume > 0) {
            volume--;
        }

    }

    std::cout << volume << std::endl;

    return 0;
}