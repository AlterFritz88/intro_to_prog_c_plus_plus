#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    int counter = 1;
    getline(cin, s);
    for (auto ch:s){
        if (ch == ' '){
            counter++;
        }
    }
    cout << counter;
    return 0;
}

