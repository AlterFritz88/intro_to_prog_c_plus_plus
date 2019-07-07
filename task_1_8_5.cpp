#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    for (int k = 1; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i+k == j){
                    arr[i][j] = k;
                }
            }
        }
    }

    for (int k = 1; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i-k == j){
                    arr[i][j] = k;
                }
            }
        }
    }



    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
