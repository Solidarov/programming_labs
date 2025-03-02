#include <iostream>
#include <string>
#include <bitset>
#include <bits/stdc++.h>
#include "b64/encode.h"
#include "b64/decode.h"
using namespace std;


string base64_encoding(string, int);
string base64_decoding(string, int);\

// Таблиця символів для Base64
static const char b64_table[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'
};

int main(){
    string msg, result_msg;

    cout << "Enter the message: ";
    getline(cin, msg);

    int msg_len = msg.length();

    bool flag;
    cout << "\nEncode(1) or Decode(0) message: ";
    cin >> flag;

    if (flag){
        result_msg = base64_encoding(msg, msg_len);
    
        cout << "\nEncoded message by my base64:\t " << result_msg << endl;
    
        // Використання бібліотеки libb64
        base64::encoder encoder;
        string encoded;
        encoded.resize(msg.size() * 2);
    
        int encoded_size = encoder.encode(msg.data(), msg.size(), &encoded[0]);
    
        int final_size = encoder.encode_end(&encoded[encoded_size]);
        encoded_size += final_size;
    
        encoded.resize(encoded_size);
    
        cout << "Encoded message by libb64:\t " << encoded << endl;

    }else{
        result_msg = base64_decoding(msg, msg_len);

        cout << "\nDecoded message by my base64:\t " << result_msg << endl;

        base64::decoder decoder;
        string decoded;
        decoded.resize(msg.size()); // Заздалегідь виділяємо достатньо місця

        int decoded_size = decoder.decode(msg.data(), msg.size(), &decoded[0]);
        decoded.resize(decoded_size); // Обрізаємо до фактичного розміру

        cout << "Decoded message by libb64:\t " << decoded << endl;

    }
    return 0;
}

string base64_encoding(string msg, int msg_len){
    
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
        result += b64_table[index];
    }

    // якщо довжина символів не виходить кратною 4, 
    // додаємо до неї потрібну кількість '='
    int divby4 = result.length() % 4;
    if (divby4 != 0){
        result.append((4-divby4), '=');
    }

    return result;
}

string base64_decoding(string d_msg, int msg_len){

    // Видалення зайвих = в повідомленні
    int erase = 0;
    for (int i = 1; i <= 2; i++){
        if (d_msg[msg_len-i] == '='){
            erase += 1;
        }
    }
    d_msg.erase(msg_len-erase);
    msg_len -= erase;

    // знаходження індексів у таблиці Base64
    int base64_table_idx[msg_len];
    for (int i = 0; i < msg_len; i++){
        int idx = find(b64_table, b64_table + 64, d_msg[i]) - b64_table;
        base64_table_idx[i] = idx;
    }

    //перетворення індексів з таблиці Base64 у біти
    string binary_msg;
    for (int i = 0; i < msg_len; i++){
        bitset<6> binary_repr(base64_table_idx[i]);
        binary_msg += binary_repr.to_string();
    }

    //ділимо рядок на 8бітні частини, які переводимо у цілий тип
    //а потім цілі числа використовуємо як індекси до знаків ASCII
    // та записуємо їх до стрічки 
    string result;
    for (int i = 0; i < binary_msg.length(); i += 8){
        string one_char = binary_msg.substr(i, 8); 
        int index = stoi(one_char, nullptr, 2);
        result += char(index);
    }

    return result;
}