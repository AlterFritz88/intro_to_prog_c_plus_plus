#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, number = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        if (x > 0){
            number++;
        }
    }
    cout << number;
    return 0;
}
