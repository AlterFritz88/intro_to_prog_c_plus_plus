#include <iostream>
using namespace std;

int main() {
    int r, c, counter = 1;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if ((i % 2 == 0 and j % 2 == 0) or (i % 2 == 1 and j % 2 == 1)){
                arr[i][j] = counter;
                counter++;
            } else {
                arr[i][j] = 0;
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

