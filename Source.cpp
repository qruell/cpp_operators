#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int number1, number2;
    cout << "������ ����� �����: ";
    cin >> number1;
    cout << "������ ����� �����: ";
    cin >> number2;

    cout << (number1 == number2 ? "����� ���.\n" : "����� �� ���. � ������� ���������: ");

    if (number1 < number2)
        cout << number1 << ", " << number2 << "\n";
    else
        cout << number2 << ", " << number1 << "\n";

    return 0;
}
