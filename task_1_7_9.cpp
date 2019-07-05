#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int main() {
    int n, temp;
    long min_element = LONG_MAX;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (abs(temp) % 2 == 1 and temp < min_element){
            min_element = temp;
        }
    }

    if (min_element == LONG_MAX){
        cout << 0;
    } else {
        cout << min_element;
    }
    return 0;
}
