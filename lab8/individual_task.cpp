#include <iostream>
#include <string>

void pattern(int n){
    std::string num_str = "";
    for (int i =1; i<=n; i++){
        num_str += std::to_string(i);
    }
    
    std::cout << num_str << "\n";
    for (int i = 1; i < n; i++){
        num_str += num_str[0];
        num_str.erase(0,1);
        std::cout << num_str << "\n";
    }
}

int main(){
    int n;
    std::cout << "Enter the value: ";
    std::cin >> n;

    pattern(n);
    return 0;
}