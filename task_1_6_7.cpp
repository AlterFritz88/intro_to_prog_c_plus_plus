#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, x, y;
    int k;
    cin >> p >> x >> y >> k;

    double kop = x * 100 + y ;
    for (int i = 0; i < k; i++){
        kop = kop + trunc(kop * (p / 100));
    }
    cout << trunc(kop / 100) << " " << round((kop / 100 - trunc(kop / 100)) * 100);
    return 0;
}

