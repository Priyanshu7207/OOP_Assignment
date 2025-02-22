#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int num, count;

    std::cout << "Enter the count of numbers: ";
    std::cin >> count;

    std::cout << "Enter the numbers: ";
    for (int i = 0; i < count; ++i) {
        std::cin >> num;
        numbers.push_back(num);
    }

    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    std::cout << "The three highest numbers are: ";
    for (int i = 0; i < 3 && i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
