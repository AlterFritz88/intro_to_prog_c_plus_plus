#include <iostream>
using namespace std;
int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (abs(a2 - a1) <= 1 and abs(b2 - b1) <= 1){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
