#include <iostream>

int main() {
    int number1, number2;
    std::cout << "Ââåä³òü ïåğøå ÷èñëî: ";
    std::cin >> number1;
    std::cout << "Ââåä³òü äğóãå ÷èñëî: ";
    std::cin >> number2;

    std::cout << "Ìåíøå ÷èñëî: " << (number1 < number2 ? number1 : number2) << std::endl;

    return 0;
}
