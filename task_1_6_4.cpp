#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    cout << (int)((x - int(x))*10);
    return 0;
}
