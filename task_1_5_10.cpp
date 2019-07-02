#include <iostream>
using namespace std;

int main() {
    int max_count = 1, max = -1000000, i;
    cin >> i;
    while (i != 0){
        if (i == max){
            max_count++;
        }

        if (i > max){
            swap(max, i);
            max_count = 1;
        }
        cin >> i;
    }
    cout << max_count;
    return 0;
}

