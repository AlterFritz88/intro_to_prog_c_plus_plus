#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, temp;
    set<int> array = {};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        array.insert(temp);
    }
    cout << array.size();
    return 0;
}
