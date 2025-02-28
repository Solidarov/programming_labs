#include <iostream>
#include <string>
#include <bitset>
#include "b64/encode.h"
using namespace std;


string base64_encoding(string, int);

int main(){
    string msg;

    cout << "Enter the message: ";
    getline(cin, msg);

    int msg_len = msg.length();

    string result = base64_encoding(msg, msg_len);
    
    cout << "Encoded message by my base64:\t " << result << endl;

    // Використання бібліотеки libb64
    base64::encoder encoder;
    std::string encoded;
    encoded.resize(msg.size() * 2);

    int encoded_size = encoder.encode(msg.data(), msg.size(), &encoded[0]);

    int final_size = encoder.encode_end(&encoded[encoded_size]);
    encoded_size += final_size;

    encoded.resize(encoded_size);

    std::cout << "Encoded message by libb64:\t " << encoded << std::endl;

    return 0;
}

string base64_encoding(string msg, int msg_len){
    
    // Таблиця символів для Base64
    static const char encoding[] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'
    };

    
    // Перетворення кожного символу з таблиці ASCII до двійкового представлення
    // Кожне представлення додаємо до binary_msg
    string binary_msg;

    for (int i = 0; i < msg_len; i++){
        int ascii_repr = int(msg[i]);
        bitset<8> binary_repr(ascii_repr);
        binary_msg += binary_repr.to_string();
    }

    // перевіряємо чи кількість бітів кратна 6
    // якщо ні, то додаємо потрібну кількість нулів 
    int divby6 = binary_msg.length() % 6;
    if (divby6 != 0){
        binary_msg.append((6-divby6), '0');
    }

    // рядок бітів ділимо на сегменти по 6, переводими їх у ціле число
    // та беремо це число як індекс у таблиці Base64
    string result = "";
    for (int i = 0; i < binary_msg.length(); i += 6){
        string one_char = binary_msg.substr(i, 6); 
        int index = stoi(one_char, nullptr, 2); // переводить рядок у якому бінарне число у ціле число
        result += encoding[index];
    }

    // якщо довжина символів не виходить кратною 4, 
    // додаємо до неї потрібну кількість '='
    int divby4 = result.length() % 4;
    if (divby4 != 0){
        result.append((4-divby4), '=');
    }

    return result;
}