#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    int tranc_arr[c][r];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            tranc_arr[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++) {
            cout << tranc_arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

