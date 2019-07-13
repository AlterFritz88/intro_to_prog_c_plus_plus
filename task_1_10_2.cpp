#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if (a >= 'a' and a <= 'z'){
        cout << (char)toupper(a);
    } else {
        cout << a;
    }

    return 0;
}