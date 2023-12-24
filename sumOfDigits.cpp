#include <iostream>

int sumOfDigits(int num) {
    if (num < 10) {
        return num;
    }
    return sumOfDigits(num % 10 + sumOfDigits(num / 10));
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    int result = sumOfDigits(number);

    // Display the result
    std::cout << "Sum of digits until it becomes a single-digit number: " << result << std::endl;

    return 0;
}
