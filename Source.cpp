#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int number1, number2;
    std::cout << "������ ����� �����: ";
    std::cin >> number1;
    std::cout << "������ ����� �����: ";
    std::cin >> number2;

    std::cout << "����� �����: " << (number1 < number2 ? number1 : number2) << std::endl;

    return 0;
}
