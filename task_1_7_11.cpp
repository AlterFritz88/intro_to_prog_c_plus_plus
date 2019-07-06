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

    for (int i = 0; i < (n%2 == 0 ? n : n-1); i += 2){
        temp_1 = array[i];
        temp_2 = array[i + 1];
        cout << temp_2 << " " << temp_1 << " ";
    }

    if (n % 2 == 1){
        cout << array[n-1];
    }

    return 0;
}
