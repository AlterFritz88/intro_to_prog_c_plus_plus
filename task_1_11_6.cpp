#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    set<int> s, final;

    for (int i = 0; i < n; i++){
        cin >> temp;
        s.insert(temp);
    }
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (s.find(temp) != s.end()){
            final.insert(temp);
        }
    }

    for (auto s: final){
        cout << s << ' ';
    }


    return 0;
}



