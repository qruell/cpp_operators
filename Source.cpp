#include <iostream>

int main() {
    int number1, number2;
    std::cout << "������ ����� �����: ";
    std::cin >> number1;
    std::cout << "������ ����� �����: ";
    std::cin >> number2;

    std::cout << "����� �����: " << (number1 < number2 ? number1 : number2) << std::endl;

    return 0;
}
