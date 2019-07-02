#include <iostream>
using namespace std;

int main() {
    int n, i =0;
    cin >> n;
    if ((n & (n -1)) == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

