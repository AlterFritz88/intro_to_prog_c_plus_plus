#include <iostream>
using namespace std;

int main() {
    int sum = 0, i;
    cin >> i;
    while (i != 0){
        sum += i;
        cin >> i;
    }
    cout << sum;
    return 0;
}

