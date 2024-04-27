#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int number1, number2;
    std::cout << "Введіть перше число: ";
    std::cin >> number1;
    std::cout << "Введіть друге число: ";
    std::cin >> number2;

    std::cout << (number1 == number2 ? "Числа рівні.\n" : "Числа не рівні. В порядку зростання: " + std::to_string((number1 < number2 ? number1 : number2)) + ", " + std::to_string((number1 < number2 ? number2 : number1)) + "\n");

    return 0;
}
