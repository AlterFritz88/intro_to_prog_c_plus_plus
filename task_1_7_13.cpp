#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp, counter = 0;
    cin >> n;
    vector<int> array = {};
    for (int i = 0; i < n; i++){
        cin >> temp;
        array.push_back(temp);
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (array[i] == array[j]){
                counter++;
            }
        }
    }
    cout << counter;
    return 0;
}
