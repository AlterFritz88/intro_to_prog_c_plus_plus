#include <iostream>
using namespace std;

int main() {
    int n;
    int fib1 = 1, fib2=1, fib_sum, i=2;
    cin >> n;

    while (fib2 <= n) {
        if (n == fib2){
            cout << i;
            return 0;
        }
            fib_sum = fib1 + fib2;
            swap(fib1, fib2);
            swap(fib2, fib_sum);
            i++;

    }
    cout << -1;
    return 0;
}

