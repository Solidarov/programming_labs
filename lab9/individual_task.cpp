#include <iostream>
#include <iomanip>
#include <cmath>

float need_parent_money(float stipend, float living_expenses, int months = 10, float procent = 1.03){
    float parents_money, total_expenses;
    total_expenses = living_expenses * (1 - std::pow(procent, months))/ (1 - procent);
    parents_money = total_expenses - stipend * months;
    return parents_money;
}

int main(){
    float stipend, living_expenses, result;

    std::cout << "Enter your stipend: ";
    std::cin >> stipend;
    std::cout << "\nEnter your living expenses: ";
    std::cin >> living_expenses;


    result = need_parent_money(stipend, living_expenses);

    std::cout << "\n======================" << std::endl;
    std::cout << "You will need " << std::fixed << std::setprecision(2) << result << "UAH"<< std::endl;

    return 0;
}