#include <iostream>

int main() {
    int number;
    std::cout << "������ �����: ";
    std::cin >> number;

    std::cout << (number % 2 == 0 ? "����� �����.\n" : "����� �������.\n");

    return 0;
}
