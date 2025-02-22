#include <iostream>

int main() {
    int a, b;

    std::cout << "Input 1st number: ";
    std::cin >> a;
    std::cout << "Input 2nd number: ";
    std::cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "After swapping the 1st number is: " << a << std::endl;
    std::cout << "After swapping the 2nd number is: " << b << std::endl;

    return 0;
}
