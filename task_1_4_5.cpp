#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int max;
    cin >> a >> b >> c;

    if (a < b){
        max = b;
    } else{
        max = a;
    }
    if (c > max){
        max = c;
    }
    cout << max;


    return 0;
}