#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a four-digit number: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Error: Please enter a four-digit number.\n";
        return 1;
    }

    int thousands = number / 1000;
    int hundreds = (number / 100) % 10;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    int newNumber = hundreds * 1000 + thousands * 100 + ones * 10 + tens;

    cout << "New number after swapping: " << newNumber << endl;

    return 0;
}
