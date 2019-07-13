#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    int max_letters = 0, letters = 0;
    string max_word, slovo;
    getline(cin, s);
    for (auto ch:s){
        if (ch == ' '){
            if (letters > max_letters){
                max_letters = letters;
                max_word = slovo;
            }
            letters = 0;
            slovo = "";
        } else {
            letters++;
            slovo += ch;
        }
    }

    if (letters > max_letters){
        max_letters = letters;
        max_word = slovo;
    }
    cout << max_word;
    return 0;
}
