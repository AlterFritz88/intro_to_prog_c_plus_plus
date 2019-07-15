#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int n;
    string input, delimiter = ", ", token;
    vector<string> splited;
    set<string> latin_words;
    map<string, vector<string>> dict;
    cin >> n;
    getline(cin, input);
    for (int i = 0; i < n; i++){
        getline(cin, input);
        int n1 = input.find_first_of("-");
        string key = input.substr(0, n1 - 1);
        input.erase(0, n1 + 2);






        size_t pos = 0;
        while ((pos = input.find(delimiter)) != string::npos) {
            token = input.substr(0, pos);
            latin_words.insert(token);
            dict[token].push_back(key);
            input.erase(0, pos + delimiter.length());
        }
        dict[input].push_back(key);
        latin_words.insert(input);

    }

    cout << latin_words.size() << endl;

    for (auto item: latin_words){
        vector<string> answer = dict[item];
        cout << item << " - ";
        for (int i = 0; i < answer.size(); i++){
            if (i != (answer.size() - 1)){
                cout << answer[i] << ", ";
            } else {
                cout << answer[i];
            }

        }
        cout << endl;
    }


    return 0;
}

