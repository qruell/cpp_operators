#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, g;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;

    if (b > a) {
        a = b;
    }

    cout << "Enter a number: ";
    cin >> c;

    if (c > a) {
        a = c;
    }

    cout << "Enter a number: ";
    cin >> d;

    if (d > a) {
        a = d;
    }

    cout << "Enter a number: ";
    cin >> e;

    if (e > a) {
        a = e;
    }

    cout << "Enter a number: ";
    cin >> f;

    if (f > a) {
        a = f;
    }

    cout << "Enter a number: ";
    cin >> g;

    if (g > a) {
        a = g;
    }

    cout << "The maximum number is: " << a << endl;

    return 0;
}

