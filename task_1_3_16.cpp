#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int h, a, b;
    cin >> h >> a >> b;
    cout << ceil((h - b - 1) / (a-b)) + 1 ;
    return 0;
}
