#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (a2 < a1){
        swap(a1, a2);
    }

    if (a3 < a2){
        swap(a2, a3);
    }

    if (a2 < a1){
        swap(a1, a2);
    }

    cout << a1 << " " << a2 << " " << a3 ;
    return 0;
}