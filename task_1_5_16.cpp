#include <iostream>
#include <vector>
using namespace std;

int main() {
    int maxs = 0, n;
    vector<int> array;
    vector<int> max_vector = {};
    cin >> n;
    while (n != 0){
        array.push_back(n);
        cin >> n;}

    for (int i=1; i < array.size() - 1; i++){
        if ((array[i-1] < array[i]) and (array[i] > array[i+1])){
            maxs++;
            max_vector.push_back(i);
        }
    }
    int min_path = 1000000000;

    if (max_vector.size() > 1) {
        for (int i=1; i < max_vector.size(); i++){
            if (max_vector[i] - max_vector[i-1] < min_path){
                min_path = max_vector[i] - max_vector[i-1];
            }
        }
    } else {
        min_path = 0;
    }


    cout << min_path;
    return 0;
}