#include <iostream>

using namespace std;


int main() {
    int r, c, counter = 1;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            arr[i][j] = 0;
        }
        cout << endl;
    }


    while (counter < r*c){

    }



    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            printf("%4d", arr[i][j]);
        }
        cout << endl;
    }
    return 0;
}

