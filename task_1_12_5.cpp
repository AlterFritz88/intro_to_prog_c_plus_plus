#include <bits/stdc++.h>
using namespace std;

struct num{
    int id;
    int score;
};

bool cmp(num a, num b){
    if (a.score == b.score){
        return a.id < b.id;
    }
    return a.score > b.score;
}


int main() {
    vector<num> vec;
    int n, temp1, temp2;
    cin >> n;
    for (int i = 0; i < n; i++){
        num temp;
        cin >> temp1 >> temp2;
        temp.id = temp1;
        temp.score = temp2;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end(), cmp);

    for (auto item: vec){
        cout << item.id << " " << item.score << endl;
    }
    return 0;
}
