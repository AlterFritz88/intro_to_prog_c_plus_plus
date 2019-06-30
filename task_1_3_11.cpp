#include <iostream>
using namespace std;


int main() {
    int rubs, cops, n;
    cin >> rubs;
    cin >> cops;
    cin >> n;
    int one_pie = rubs * 100 + cops;
    int total_cost = one_pie * n;
    int pies_rubs = total_cost / 100;
    cout << pies_rubs << " " << total_cost - pies_rubs*100;
    return 0;
}