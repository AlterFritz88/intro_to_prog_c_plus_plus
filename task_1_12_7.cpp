#include <bits/stdc++.h>
using namespace std;

struct student{
    string first_name;
    string second_name;
    int a1;
    int a2;
    int a3;
};

bool cmp(student a, student b){
    double middle_1 = (a.a1 + a.a2 + a.a3) / (double)3;
    double middle_2 = (b.a1 + b.a2 + b.a3) / (double)3;
    return middle_1 > middle_2;
}


int main() {
    vector<student> vec;
    string temp_fn, temp_sn;
    int n, temp1, temp2, temp3;
    cin >> n;
    for (int i = 0; i < n; i++){
        student temp;
        cin >> temp_fn >> temp_sn >> temp1 >> temp2 >> temp3;
        temp.first_name = temp_fn;
        temp.second_name = temp_sn;
        temp.a1 = temp1;
        temp.a2 = temp2;
        temp.a3 = temp3;
        vec.push_back(temp);
    }

    stable_sort(vec.begin(), vec.end(), cmp);

    for (auto item: vec){
        cout << item.first_name << " " << item.second_name << endl;
    }
    return 0;
}
