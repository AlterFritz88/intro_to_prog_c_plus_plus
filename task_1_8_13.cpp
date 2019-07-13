#include <iostream>
using namespace std;

int main() {
    int r, c, counter = 1;
    cin >> r >> c;
    int arr[r][c];

    for (int d = 0; d < (c + r - 1); d++){
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (i == d - j ){
                    arr[i][j] = counter;
                    counter++;
                }
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

