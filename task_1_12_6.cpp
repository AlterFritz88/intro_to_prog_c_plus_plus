#include <bits/stdc++.h>
using namespace std;

struct point{
    int x;
    int y;
};

bool cmp(point a, point b){
    double sq_1 = sqrt(double(a.x * a.x + a.y * a.y));
    double sq_2 = sqrt(double(b.x * b.x + b.y * b.y));
    return sq_1 < sq_2;
}


int main() {
    vector<point> vec;
    int n, temp1, temp2;
    cin >> n;
    for (int i = 0; i < n; i++){
        point temp;
        cin >> temp1 >> temp2;
        temp.x = temp1;
        temp.y = temp2;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end(), cmp);

    for (auto item: vec){
        cout << item.x << " " << item.y << endl;
    }
    return 0;
}
