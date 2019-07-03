#include <iostream>
#include <vector>
using namespace std;

int main() {
    int maxs = 0, n;
    vector<int> array;
    cin >> n;
    while (n != 0){
       array.push_back(n);
       cin >> n;}

    for (int i=1; i < array.size() - 1; i++){
        if ((array[i-1] < array[i]) and (array[i] > array[i+1])){
            maxs++;
        }
    }
    cout << maxs;
    return 0;
}

