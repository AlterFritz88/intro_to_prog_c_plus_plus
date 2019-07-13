#include <iostream>
#include <math.h>
using namespace std;

int MinDivisor(int n, int d, double sq){
    while (d <= sq){
        if (n % d == 0){
            return d;
        }
        d++;
    }
    return n;

}

int main() {
    long unsigned int n;
    cin >> n;
    double sq = sqrt(n);
    cout << MinDivisor(n, 2, sq);
    return 0;
}

