#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, x, y;
    cin >> p >> x >> y;
    p = (p / 100) + 1;
    cout << (int)((x + y / 100) * p) << " " << trunc(((x + y / 100) * p - (int)((x + y / 100) * p)) * 100 + 0.0000000001);
    return 0;
}

