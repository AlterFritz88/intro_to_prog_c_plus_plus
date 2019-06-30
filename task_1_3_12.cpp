#include <iostream>
using namespace std;
int main() {
    int seconds;
    cin >> seconds;
    int hours = (seconds / 60 /60) % 24;
    int minutes = (seconds / 60) % 60;
    int sec = seconds % 60;
    printf("%d:%.2d:%.2d", hours, minutes, sec);

    return 0;
}
