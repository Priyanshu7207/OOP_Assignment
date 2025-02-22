#include <iostream>
#include <cmath>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    std::cout << "Input any number: ";
    std::cin >> num;

    digits = (int)log10(num);

    firstDigit = num / pow(10, digits);
    lastDigit = num % 10;

    swappedNum = lastDigit * pow(10, digits) + (num % (int)pow(10, digits) - lastDigit) + firstDigit;

    std::cout << "The number after swapping the first and last digits is: " << swappedNum << std::endl;

    return 0;
}
