#include <iostream>
using namespace std;

int main() {
    int maxs = 0, n, test;
    cin >> n;
    while (n != 0){
        cin >> test;

        if (test == 0){
            break;
        }

        if (test > n){
            cin >> n;

            if (n == 0){
                break;
            }

            if (n < test){
                maxs++;
                cin >> n;
                continue;
            } else{

                continue;
            }
        } else{
            cin >> n;
            continue;
        }
        cin >> n;
    }
    cout << maxs;
    return 0;
}

