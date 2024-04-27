#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int number;
    std::cout << "¬вед≥ть число: ";
    std::cin >> number;

    std::cout << (number % 2 == 0 ? "„исло парне.\n" : "„исло непарне.\n");

    return 0;
}
