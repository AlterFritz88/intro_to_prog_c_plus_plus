#include <iostream>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (n > m) {
        int temp = m;
        int temp2 = n;
        n = temp;
        m = temp2;
    }
    int x2 = n - x;
    int y2 = m - y;

    cout << min(min(x, x2), min(y, y2));

    return 0;
}
