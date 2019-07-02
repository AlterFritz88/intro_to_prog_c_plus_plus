#include <iostream>
using namespace std;

int main() {
    int n;
    int fib1 = 1, fib2=1, fib_sum;
    cin >> n;

    if (n == 0){
        cout << 1;
        return 0;
    }
    int i = 0;
    while(i < n-2){
        fib_sum = fib1 + fib2;
        swap(fib1, fib2);
        swap(fib2, fib_sum);
        i++;
    }
    cout << fib2;
    return 0;
}
