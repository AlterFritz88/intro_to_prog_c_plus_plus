#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, temp;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (s.find(temp) == s.end()){
            cout << "NO" << endl;
            s.insert(temp);
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
