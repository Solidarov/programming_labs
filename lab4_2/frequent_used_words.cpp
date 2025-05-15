#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cctype>
using namespace std;

bool is_divider(char c) {
    // Return true for any punctuation or whitespace except apostrophe
    return (ispunct(c) && c != '\'') || isspace(c);
}

string checkForPunctuation(string text, bool &have_alpha){
    for (char& c : text) {
        if (is_divider(c)) c = ' ';
        if (isalpha(c)) have_alpha = true;
        c = tolower(c);
    }
    return text;
}

void frequentUsedWords(string raw_text){
    bool have_alpha = false;
    string formated_text = checkForPunctuation(raw_text, have_alpha);

    if (have_alpha){
        map <string, int> count_words;

        istringstream ss(formated_text);
        string word;
        while (ss >> word) {
            count_words[word]++;
        }

        vector<pair<string, int>> freq(count_words.begin(), count_words.end());

        sort(freq.begin(), freq.end(), [](std::pair<string, int>& a, std::pair<string, int>& b)
        {
            return a.second > b.second;
        }
        );
    
        cout << "\nTop 3 most frequent words:" << endl;
        for (int i = 0; i < freq.size() && i < 3; i++){
            cout << freq[i].first << ": " << freq[i].second << endl;
        }
    
    }else{
        cout << "\nText doesn't contain letters" << endl;
    }
}

int main(){
    string text = "In a village of La Mancha, the name of which I have no desire to call to mind,";
    text += " there lived not long since one of those gentlemen that keep a lance";
    text += "in the lance-rack, an old buckler, a lean hack, and a greyhound for";
    text += "coursing. An olla of rather more beef than mutton, a salad on most";
    text += "nights, scraps on Saturdays, lentils on Fridays, and a pigeon or so extra";
    text += "on Sundays, made away with three-quarters of his income.";
    frequentUsedWords(text);

    text = "e e e e DDD ddd DdD: ddd ddd aa aA Aa, bb cc cC e e e";
    frequentUsedWords(text);

    text = "  '''  ";
    frequentUsedWords(text);

    text = "  , e   .. ";
    frequentUsedWords(text);

    text = "  //wont won't won't ";
    frequentUsedWords(text);

    return 0;
}