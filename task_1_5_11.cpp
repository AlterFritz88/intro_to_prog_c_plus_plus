#include <iostream>
using namespace std;

int main() {
    int max = -1000, pred_max = -100, i;
    cin >> i;
    while (i != 0){
        if (i >= max and i >= pred_max){
            swap(max, i);
            swap(i, pred_max);
            cin >> i;
            continue;
        }
        if (i <= max and i >= pred_max){
            swap(i, pred_max);

        }
        cin >> i;
    }
    cout << pred_max;
    return 0;
}

