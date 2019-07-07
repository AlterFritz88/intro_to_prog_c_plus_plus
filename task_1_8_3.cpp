#include <iostream>
#include <climits>
using namespace std;

int main() {
    int r, c, temp, max_y, max_x;
    long max = LONG_MIN;
    cin >> r >> c;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> temp;
            if (temp > max){
                max = temp;
                max_y = i;
                max_x = j;
            }
        }
    }
    cout << max_y << " " << max_x;
    return 0;
}
