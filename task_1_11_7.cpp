#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    string key, value;
    map<string, string> dict;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> key >> value;
        dict[key] = value;
    }
    cin >> value;

    for (auto item: dict){
        if (value == item.first){
            cout << item.second;
            break;
        }
        if (value == item.second){
            cout << item.first;
        }
    }

    return 0;
}

