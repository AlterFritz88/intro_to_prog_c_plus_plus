#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int n, counter = 0, sum = 0;
    cin >> n;
    vector<int> array = {};
    while(n != 0){
        array.push_back(n);
        counter++;
        sum += n;
        cin >> n;
    }

    double s = (double)sum / counter;

    double sigma = 0;
    for(int i=0; i < array.size(); i++){
        sigma += pow((array[i] - (double)s), 2);
    }

    cout << setprecision(11) << fixed;
    cout << sqrt((sigma/(counter - 1)));
    return 0;
}

