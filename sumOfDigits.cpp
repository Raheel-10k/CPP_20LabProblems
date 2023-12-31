#include <iostream>
using namespace std;
int sumOfDigits(int num) {
    if (num < 10) {
        return num;
    }
    return sumOfDigits(num % 10 + sumOfDigits(num / 10));
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = sumOfDigits(number);
    cout << "Sum of digits until it becomes a single-digit number: " << result << endl;

    return 0;
}
