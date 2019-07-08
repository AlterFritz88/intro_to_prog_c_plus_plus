#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, diag;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cin >> diag;

    vector<int> diag_vec = {};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i-diag == j){
                diag_vec.push_back(arr[i][j]);
            }
        }
    }

    for (int i = 0; i < diag_vec.size(); i++){
        cout << diag_vec[i] << " ";
    }


    return 0;
}

