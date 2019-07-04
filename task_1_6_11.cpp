#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b*b - 4*a*c;
    if (d == 0){
        cout << (-b/(2*a));
    } else if (d > 0){
        double x1 = (-b + sqrt(d)) / (2*a);
        double x2 = (-b - sqrt(d)) / (2*a);
        if (x1 < x2){
            cout << x1 << " " << x2;
        } else {
            cout << x2 << " " << x1;
        }
    }

    return 0;
}

