#include <iostream>

int main() {
    int number;
    std::cout << "¬вед≥ть число: ";
    std::cin >> number;

    std::cout << (number % 2 == 0 ? "„исло парне.\n" : "„исло непарне.\n");

    return 0;
}
