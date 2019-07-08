#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    int places;
    cin >> places;

    for (int i = 0; i < r; i++){
        int counter = 0;
        for (int j = 0; j < c; j++){
            if (arr[i][j] == 0){
                counter++;
            } else {
                counter = 0;
            }
            if (counter == places){
                cout << i + 1;
                return 0;
            }
        }
    }

    cout << 0;

    return 0;
}

