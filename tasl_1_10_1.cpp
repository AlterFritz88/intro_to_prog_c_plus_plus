#include <iostream>
#include <string>
using namespace std;

int main() {
    char a;
    cin >> a;
    if (a >= '0' and a <= '9' ){
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}

