#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int number1, number2;
    cout << "Введіть перше число: ";
    cin >> number1;
    cout << "Введіть друге число: ";
    cin >> number2;

    cout << (number1 == number2 ? "Числа рівні.\n" : "Числа не рівні. В порядку зростання: ");

    if (number1 < number2)
        cout << number1 << ", " << number2 << "\n";
    else
        cout << number2 << ", " << number1 << "\n";

    return 0;
}
