#include <iostream>
#include <string>
using namespace std;

int main() {
    int points_counter = 0, number_int, number_bytes = 0;
    string ip, number= "";
    cin >> ip;
    for (auto ch:ip){
        if (ch != '.') {
            if (ch < '0' or ch > '9') {
                cout << "NO";
                return 0;
            }
            number += ch;
            number_int = stoi(number);
            if (number_int > 255){
                cout << "NO";
                return 0;
            }
        } else {
            points_counter++;
            if (points_counter > 3){
                cout << "NO";
                return 0;
            }
            number_bytes ++;
            number = "";
        }

    for (int i = 1; i < ip.length(); i++){
        if (ip[i] == '.' and ip[i-1] == '.'){
            cout << "NO";
            return 0;
        }
    }



    }
    if (points_counter < 3){
        cout << "NO";
        return 0;
    }
    if (ip[ip.length()-1] == '.' or ip[0] == '.'){
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int a1=0, a2=0, a3=0, a4=0;
//    scanf("%d.%d.%d.%d", &a1, &a2, &a3, &a4);
//    cout << a1 << " " << a2 << " " << a3 << " " << a4;
//    return 0;
//}