#include <iostream>

using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cerr << "Error: Cannot divide by zero.\n";     //used to indicate error messages on terminal window
            return 0.0;
        }
    }
};

int main() {
    Calculator calculator;

    double num1, num2, res;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << calculator.add(num1, num2) << "\n";
            break;
        case '-':
            cout << "Result: " << calculator.subtract(num1, num2) << "\n";
            break;
        case '*':
            cout << "Result: " << calculator.multiply(num1, num2) << "\n";
            break;
        case '/':
            res = calculator.divide(num1, num2);
            if (res == 0.0) {
                return 1;   // return 1 means code ended somewhere unexpected (in this case division by 0)
            }
            cout << "Result: " << res << "\n";
            break;
        default:
            cerr << "Error: Invalid operation.";
            break;
    }

    return 0;
}
