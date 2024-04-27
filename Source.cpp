#include <iostream>
using namespace std;

bool isLuckyNumber(int number) {
    if (number < 100000 || number > 999999)
        return false;

    int firstHalf = number / 1000;
    int secondHalf = number % 1000;

    int sumFirstHalf = 0, sumSecondHalf = 0;
    while (firstHalf != 0) {
        sumFirstHalf += firstHalf % 10;
        firstHalf /= 10;
    }
    while (secondHalf != 0) {
        sumSecondHalf += secondHalf % 10;
        secondHalf /= 10;
    }
    return sumFirstHalf == sumSecondHalf;
}

int main() {
    int number;
    cout << "Enter a six-digit number: ";
    cin >> number;

    if (isLuckyNumber(number))
        cout << "It's a lucky number!" << endl;
    else
        cout << "It's not a lucky number." << endl;

    return 0;
}
