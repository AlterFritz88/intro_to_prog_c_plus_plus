#include <iostream>
using namespace std;

int main() {
    int n;
    double x, result = 0, a;
    cin >> n;
    cin >> x;
    while (n != 0){
        cin >> a;
        result += a;
        result *= x;
        n -= 1;
    }
    cin >> a;
    result += a;
    cout << result;

    return 0;
}
