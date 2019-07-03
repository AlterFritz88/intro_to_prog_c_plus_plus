#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, sum = 0;
    int counter = 0;
    cin >> n;
    while(n != 0){
        sum += n;
        counter++;
        cin >> n;
    }
    cout << setprecision(10) << fixed;
    cout << sum / counter;
    return 0;
}

