#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    string copy(s);
    reverse(copy.begin(), copy.end());

    if (s.size() % 2 == 0){
        string part_1 =  s.substr(0, (s.size() / 2));
        string part_2 = copy.substr(0, (copy.size() / 2));
        if (part_1 == part_2){
            cout << "yes";
        } else {
            cout << "no";
        }
    } else {
        string part_1 =  s.substr(0, (((s.size() / 2) + 1)));
        string part_2 = copy.substr(0, (((s.size() / 2) + 1)));
        if (part_1 == part_2){
            cout << "yes";
        } else {
            cout << "no";
        }
    }
    return 0;
}

