#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector<int> array = {};
    vector<int> answer = {};
    for (int i = 0; i < n; i++){
        cin >> temp;
        array.push_back(temp);
    }

    for (int i = 0; i < n; i++){
        int sum_item = 0;
        temp = array[i];
        for (int j = 0; j < n; j++){
            if (temp == array[j]){
            sum_item++;
            }
        }
        if (sum_item == 1){
            answer.push_back(array[i]);
        }
    }
    for (auto & item : answer){
        cout << item << " ";
    }

    return 0;
}
