#include <iostream>
using namespace std;

int main() {
    int num, maxNum;

    cout << "Enter 7 integers: ";
    cin >> maxNum;

    for (int i = 1; i < 7; ++i) {
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
    }

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
