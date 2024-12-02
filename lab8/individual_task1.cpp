#include <iostream>
#include <string>
#include <ctime>

void print_tree(int padding){
    int leaves = 1, padding2 = padding, trunk_h = (padding/3); 

    std::srand(std::time(0)); //Бере теперішній час, як рандомне значення для rand()

    for (int i = 1; i <= padding2; i++){
        std::cout << std::string(padding, ' '); // Починає новий рівень листви

        // Працює доки значення k не більше ніж листів на рівні
        for (int k = 0; k < leaves; k++) { 
        
            int rand_num = std::rand() % 9; //Генерує випадкове число від 0 до 8
            if (rand_num == 0) {
                std::cout << 'o';
            } else if (rand_num == 1) {
                std::cout << 'x'; 
            } else {
                std::cout << '*';
            }
        }
        std::cout << std::endl; // закінчує рівень листви

        leaves += 2; // Додає два листа на наступний рівень
        padding--; // Зменчує к-сть відступів для наступного рівня
    
    }

    // Цикл для стовбура дерева
    for (trunk_h; trunk_h>=1; trunk_h--){
        std::cout << std::string(padding2, ' ') << "N" << std::endl;
    }
}

int main(){
    int padding;
    std::cout << "Enter the number of layers: ";
    std::cin >> padding;
    std::cout << std::string(10, '=') << std::endl;
    std::cout << "RESULT:" << '\n' <<std::endl;
    
    print_tree(padding);
    return 0;
}