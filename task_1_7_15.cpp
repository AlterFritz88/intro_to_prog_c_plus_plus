#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n = 8, x, y;
    int arr[8][2];
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if ((abs(arr[i][0]-arr[j][0]) == abs(arr[i][1]-arr[j][1]))){
                cout << "YES";
                return 0;
            }
        }
    }

    set<int> set_hor, set_vert;
    for (int i = 0; i < n; i++){
        set_hor.insert(arr[i][0]);
        set_vert.insert(arr[i][1]);
    }
    if (set_hor.size() == 8 and set_vert.size() == 8){
        cout << "NO";
    } else{
        cout << "YES";
    }

    return 0;
}


