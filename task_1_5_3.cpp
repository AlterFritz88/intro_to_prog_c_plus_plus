#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (1){
        if (i*i <= n){
            cout << i*i << " ";
            i++;
        } else {
        break;}
    }
    return 0;
}

