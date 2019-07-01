#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    if (a2 < a1){
        swap(a1, a2);
    }

    if (a3 < a2){
        swap(a2, a3);
    }

    if (a2 < a1){
        swap(a1, a2);
    }


    if (b2 < b1){
        swap(b1, b2);
    }

    if (b3 < b2){
        swap(b2, b3);
    }

    if (b2 < b1){
        swap(b1, b2);
    }

    if (a1 == b1 and a2 == b2 and a3 == b3){
        cout << "Boxes are equal";
        return 0;
    }

    if (a1 <= b1 and a2 <= b2 and a3 <= b3) {
        cout << "The first box is smaller than the second one";
    } else if ((a1 >= b1 and a2 >= b2 and a3 >= b3)){
        cout << "The first box is larger than the second one";
    } else {
        cout << "Boxes are incomparable";
    }

    return 0;
}