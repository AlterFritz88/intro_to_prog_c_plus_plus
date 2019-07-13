#include <iostream>
using namespace std;


int n;

int func(int sum){
    cin >> n;
    if (n == 0){
        return sum;
    }
    sum += n;
    return func(sum);
}

int main() {
    cout << func(0);
    return 0;
}

