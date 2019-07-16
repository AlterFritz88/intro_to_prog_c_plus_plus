#include <bits/stdc++.h>
using namespace std;

int main() {
    int person, n, temp, count = 0;
    cin >> person;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());
    int last = person, index;
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] >= person){
            index = i;
            count++;
            last = vec[i];
            break;
        }
    }


    for (int i = index; i < vec.size(); i++){
        if (vec[i] >= (last + 3)){
            count++;
            last = vec[i];
        }
    }

    cout << count;
    return 0;
}