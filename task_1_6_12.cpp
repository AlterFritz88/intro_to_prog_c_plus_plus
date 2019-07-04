#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0 and b == 0 and c == 0){
        cout << 3;
        return 0;
    }
    if (a == 0 and b == 0 and c != 0){
        cout << 0;
        return 0;
    }
    if (a == 0 and b != 0){
        cout << 1 << " " << -c/b;
        return 0;
    }
    double d = b*b - 4*a*c;
    if (d < 0){
        cout << 0;
        return 0;
    }

    if (d == 0){
        cout << 1 << " " << (-b/(2*a));
    } else if (d > 0){
        double x1 = (-b + sqrt(d)) / (2*a);
        double x2 = (-b - sqrt(d)) / (2*a);
        if (x1 < x2){
            cout << 2 << " " << setprecision(11) << x1 << " " << x2;
        } else {
            cout << 2 << " " << setprecision(11) << x2 << " " << x1;
        }
    }
    return 0;
}

