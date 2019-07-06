#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp_1, temp_2;
    cin >> n;
    vector<int> array = {};
    for (int i = 0; i < n; i++){
        cin >> temp_1;
        array.push_back(temp_1);
    }
    cout << array[n-1] << " ";
    for (int i = 0; i < n - 1; i++){
        cout << array[i] << " ";
    }
    return 0;
}

