#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp, min_posintive = 10000000;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp > 0 and temp < min_posintive){
                min_posintive = temp;
        }
    }
    cout << min_posintive;

    return 0;
}

