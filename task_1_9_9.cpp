#include <iostream>
using namespace std;

double power(long double a, int n){
    if (n == 0){
        return 1;
    }
    if (n > 0){
        return a * power(a, n-1);
    } else {
        return a * power(a, n+1);
    }

}


int main() {
    long double a;
    int n;
    cin >> a >> n;
    if (n < 0){
        a = 1/a;
    }
    cout << power(a, n);
    return 0;
}

