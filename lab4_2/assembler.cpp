#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>
#include <iostream>
using namespace std;

int getValue(const string& operand, unordered_map<string, int>& regs) {
    try {
        return stoi(operand);
    } catch (...) {
        auto it = regs.find(operand);
        return (it != regs.end()) ? it->second : 0;
    }
}

unordered_map<string, int> assembler (const vector<string>& program) {
    unordered_map<string, int> regs;
    int i = 0;
    
    while (i >= 0 && i < static_cast<int>(program.size())) {
        istringstream iss(program[i]);
        string instr;
        iss >> instr;

        if (instr == "mov") {
            string x, y;
            iss >> x >> y;
            regs[x] = getValue(y, regs);
            ++i;
        } else if (instr == "inc") {
            string x;
            iss >> x;
            regs[x] = getValue(x, regs) + 1;
            ++i;
        } else if (instr == "dec") {
            string x;
            iss >> x;
            regs[x] = getValue(x, regs) - 1;
            ++i;
        } else if (instr == "jnz") {
            string x, y;
            iss >> x >> y;
            if (getValue(x, regs) != 0) {
                i += getValue(y, regs);
            } else {
                ++i;
            }
        } else {
            ++i;
        }
    }

    return regs;
}