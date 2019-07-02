#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int n, i = 0;
    cin >> n;
    while (pow(2, i) <= n){
        cout << pow(2, i) << " ";
        i++;
    }
    return 0;
}

