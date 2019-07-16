#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    for (auto item : vec){
        cout << item << " ";
    }


    return 0;
}