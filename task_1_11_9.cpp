#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

string to_lower(string test){
    for(auto& c : test)
    {
        c = tolower(c);
    }
    return test;
}


int main() {
    int n, mistakes = 0;
    string temp, task,delimiter = " ", token;
    map<string, vector<string>> dict;
    vector<string> task_v;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        string lower = to_lower(temp);
        dict[lower].push_back(temp);
    }
    getline(cin, task);
    getline(cin, task);


    size_t pos = 0;
    while ((pos = task.find(delimiter)) != string::npos) {
        token = task.substr(0, pos);
        task_v.push_back(token);
        task.erase(0, pos + delimiter.length());
    }
    task_v.push_back(task);

    if (task_v[0] == ""){
        cout << mistakes;
        return 0;
    }
    for (auto word: task_v){
        string word_lower = to_lower(word);
        if ( dict.find(word_lower) == dict.end() ) {
            // not found
            int count = 0;
            for (int i = 0; i < word.length(); i++){
                if (word[i] >= 'A' and word[i] <= 'Z'){
                    count++;
                }
            }
            if (count != 1){
                mistakes++;
            }
        } else {
            // found
            vector<string> words_range = dict[word_lower];
            bool yes = false;
            for (auto try_word: words_range){

                if (word == try_word){
                    yes = true;
                    break;
                }
            }
            if (yes == false){
                mistakes++;
                }
        }
    }


    cout << mistakes;
    return 0;
}

