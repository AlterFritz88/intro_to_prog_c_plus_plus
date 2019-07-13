#include <iostream>
using namespace std;

int min(int a, int b){
    if (a < b){
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (min(a, b) < min(c, d)){
        cout << min(a, b);
    } else {
        cout << min(c, d);
    }

    return 0;
}

