#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (((a1 == a2) and (b1 != b2)) or ((a1 != a2) and (b1 == b2))) {
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}

