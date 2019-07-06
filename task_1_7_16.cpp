#include <iostream>
#include <vector>
using namespace std;

int main() {
    int kegels, n, a, b;

    cin >> kegels >>  n;
    vector<char> stack(kegels);

    for (int i = 0; i < kegels; i++){
        stack[i] = 'I';
    }

    for (int i = 0; i < n; i++){
        cin >> a >> b;
        for (int j = a-1; j <= b-1; j++){
            stack[j] = '.';
        }
    }

    for (int i = 0; i < kegels; i++){
        cout << stack[i];
    }

    return 0;
}

