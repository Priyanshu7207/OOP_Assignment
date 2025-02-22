#include <iostream>

int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int start, end, totalSum = 0;

    std::cout << "Enter the starting number: ";
    std::cin >> start;
    std::cout << "Enter the ending number: ";
    std::cin >> end;

    for (int i = start; i <= end; ++i) {
        totalSum += sumDigits(i);
    }

    std::cout << "The sum of all the digits between " << start << " and " << end << " is: " << totalSum << std::endl;

    return 0;
}
