#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int number;
    std::cout << "¬вед≥ть число: ";
    std::cin >> number;

    std::cout << (number > 0 ? "÷е додатне число.\n" : (number < 0 ? "÷е в≥д'Їмне число.\n" : "÷е число дор≥внюЇ нулю.\n"));

    return 0;
}
