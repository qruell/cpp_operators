#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int number;
    std::cout << "������ �����: ";
    std::cin >> number;

    std::cout << (number % 2 == 0 ? "����� �����.\n" : "����� �������.\n");

    return 0;
}
