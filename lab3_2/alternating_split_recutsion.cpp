#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int n){
    if (n > 0){
        if (text.empty()) return text;

        int mid = (text.length() % 2 == 0) ? text.length() / 2 : text.length() / 2 + 1;
    
        for (int i = 0; i < mid; i++){
            text += text[i];
            text.erase(i, 1);
        }
        return encrypt(text, --n);

    }else{
        return text;
    }
}

string decrypt(string encryptedText, int n){
    if (n > 0){
        if (encryptedText.empty()) return encryptedText;

        int mid = encryptedText.length() / 2;
        
        while (mid > 0){
            encryptedText += encryptedText[mid];
            encryptedText += encryptedText[0];
            
            encryptedText.erase(mid, 1);
            encryptedText.erase(0, 1);

            mid--;
        }

        if (encryptedText.length() % 2 != 0){
            encryptedText += encryptedText[0];
            encryptedText.erase(0, 1);
        }

        return decrypt(encryptedText, --n);
    }
    else{
        return encryptedText;
    }
}

int main(){
    string text;
    int n;
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter number of iterations: ";
    cin >> n;


    cout << "\nOriginal text --> \t" << text << endl;
    cout << "Encrypted text --> \t" << encrypt(text, n) << endl;
    cout << "Decrypted text --> \t" << decrypt(encrypt(text, n), n) << endl;
    return 0;
}