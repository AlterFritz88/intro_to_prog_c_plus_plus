#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    char table[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            table[i][j] = '.';
        }
    }
    int middle = n / 2;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == middle or j == middle or i == j or n-i-1 == j){
                table[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
