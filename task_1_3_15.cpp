#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d4 = n / 1000;
    int d3 = n / 100 % 10;
    int d2 = n / 10 % 10;
    int d1 = n % 10;
    cout << ((d4*10 + d3) - (d1*10 + d2)) + 1;
    return 0;
}
