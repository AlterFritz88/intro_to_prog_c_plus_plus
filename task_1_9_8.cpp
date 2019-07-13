#include <iostream>
#include <math.h>
using namespace std;

bool IsPointInArea(double x, double y){
    return (pow((y-1), 2) + pow((x+1), 2) <= 4 and y >= -x and y >= 2*x + 2) or (pow((y-1), 2) + pow((x+1), 2) >= 4 and y <= -x and y <= 2*x + 2);
}

int main() {
    double x, y;
    cin >> x >> y;
    if (IsPointInArea(x, y)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
