#include <iostream>
using namespace std;

int main() {
    int max = -10000000, i;
    cin >> i;
    while(i != 0){
        if (i > max){
            swap(max, i);
        }
        cin >> i;
    }
    cout << max;
    return 0;
}

