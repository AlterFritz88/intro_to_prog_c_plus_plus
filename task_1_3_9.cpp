#include <iostream>
using namespace std;


int main() {
    int N;
    cin >> N;
    cout << N - (N % 2) + 2;
    return 0;
}
