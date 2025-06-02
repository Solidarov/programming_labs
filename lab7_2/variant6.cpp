// Надрукувати всі слова, які відрізняються від першого слова і співпадають
// з початковим відрізком алфавіту (a, ab, abc тощо). Видалити першу літеру в цих
// словах. До кожного слова дописати крапку. Використати масив.

#include <iostream>
#include <cstring>
using namespace std;


bool checkAlph(char word[]){
    // посимвольно перевіряє чи відповідає слово початковому відрізку алфавіту

    char current = 'a';

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] != current) return false;
        current++;
    }
    return true;
}

void processWords(){
    char words [45][46] = {0};
    char line[1024] = {0};
    cout << "Enter words separated by spaces (end input with Enter):\n";
    cin.getline(line, 1024); // для зручності, записуємо всі слова в одну стрічку
    
    int word_idx = 0, char_idx = 0;

    // посимвольно перевіряємо стрічку line та ділимо її на слова, 
    // що записуємо до words
    for (int i = 0; line[i] != '\0'; i++){
        if (line[i] == ' '){
            if (char_idx > 0){
                words[word_idx][char_idx++] = '\0';
                word_idx++;
                char_idx = 0;
                if (word_idx >= 45) break;
            }
               
        }else{
            if (char_idx < 45) {
                words[word_idx][char_idx++] = line[i];
            }
        }        
    }
    
    // записуємо до words залишкове слово, якщо таке є
    if (char_idx > 0 && word_idx < 45) {
        words[word_idx][char_idx++] = '\0';
        word_idx++;
    }
    

    // виводимо слова, що відповідають умовам, на екран
    cout << "\nWords:\n";
    for (int i = 0; i < word_idx; ++i) {

        // виключення для першого слова
        if (i == 0 && checkAlph(words[i])){
            cout << i << " ";

            for (int j = 1; words[i][j] != '\0'; j++){
                cout << words[i][j];
            }
            cout << "." << endl;
            continue;
        }

        if (checkAlph(words[i]) && strcmp(words[i], words[0]) != 0){
            for (int j = 0; words[i][j] != '\0'; j++){
                words[i][j] = words[i][j+1];
            }
            cout << i << " " << words[i] << "." << endl;
        }
    }

}

int main(){
    processWords();
    return 0;
}