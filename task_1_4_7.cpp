#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == b) and (b == c) and (a == c)){
        cout << 3;
    } else if ((a != b) and (b != c) and (a != c)) {
        cout << 0;
    } else{
        cout << 2;
    }
    return 0;
}
