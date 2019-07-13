#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int r, c, n = 1;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++){
        if (i % 2 == 0){
            for (int j = 0; j < c; j++){
                arr[i][j] = n;
                n++;
            }
        } else {
            for (int j = 0; j < c; j++){
                arr[i][c - j - 1] = n;
                n++;
            }
        }

    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            printf("%4d", arr[i][j]);
        }
        cout << endl;
    }
    return 0;
}
