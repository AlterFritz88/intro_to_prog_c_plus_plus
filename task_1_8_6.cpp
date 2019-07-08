#include <iostream>
using namespace std;

int main() {
    int r, c, temp, change1, change2;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    cin >> change1 >> change2;

    for (int i = 0; i < r; i++){
        temp = arr[i][change1];
        arr[i][change1] = arr[i][change2];
        arr[i][change2] = temp;

    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
