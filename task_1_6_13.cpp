#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (e * d - b * f) / (a * d - b * c ) << " " << (a * f - e * c) / (a * d - b * c );
    return 0;
}

