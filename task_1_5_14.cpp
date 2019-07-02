#include <iostream>
using namespace std;

int main() {
    int n, repeat = 1, test_repeat;
    int test;
    cin >> n;

    while (n != 0){
        cin >> test;
        test_repeat = 1;
        while (n == test){
            test_repeat++;
            cin >> test;
        }
        n = test;
        if (test_repeat > repeat){
            swap(test_repeat, repeat);
        }
    }
    cout << repeat;
    return 0;
}
