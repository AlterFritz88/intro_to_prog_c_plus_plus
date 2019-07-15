#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, temp, counter = 0;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++){
        cin >> temp;
        s.insert(temp);
    }
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (s.find(temp) != s.end()){
            counter++;
        }
    }
    cout << counter;

    return 0;
}

