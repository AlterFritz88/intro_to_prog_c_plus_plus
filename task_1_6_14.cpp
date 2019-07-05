#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double delta = (a * d) - (b * c);
    double delta_x = e * d - b * f;
    double delta_y = a * f - c * e;

    if (delta != 0){
        cout << 2 << " " << (e * d - b * f) / (a * d - b * c ) << " " << (a * f - e * c) / (a * d - b * c );
    } else {
        if (delta_x == 0 and delta_y == 0){
            if (a == 0 and b == 0 and c == 0 and d == 0){
                if (e != 0 or f != 0){
                    cout << 0;
                } else {
                    cout << 5;
                }
            } else {
                if (a == 0 and c == 0)
                    {
                        if (b != 0) {
                            cout << 4 << " " << e / b;
                        } else {
                            cout << 4 << " " << f / d;
                        }
                    } else {
                    if (b == 0 and d ==0){
                        if (a != 0){
                            cout << 3 << " " << e/a;
                        } else {
                            cout << 3 << " " << f/c;
                        }
                    } else {
                        if (b != 0){
                            cout << 1 << " " << -(a/b) << " " << e/b;
                        } else {
                            cout << 1 << " " << -(c/d) << " " << f/d;
                        }
                    }
                }
            }
        }  else{
            cout << 0;
        }
    }
    return 0;
}
