#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector<int> array = {};
    for (int i = 0; i < n; i++){
        cin >> temp;
        array.push_back(temp);
    }

    for (int i = 1; i < array.size(); i++){
        if (array[i-1] < array[i]){
            cout << array[i] << " ";
        }
    }

    return 0;
}

