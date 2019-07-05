#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 0; i < array.size(); i++){
        if (array[i] % 2 == 0){
            cout << array[i] << " ";
        }
    }

    return 0;
}
