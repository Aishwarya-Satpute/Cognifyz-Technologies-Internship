#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    // Input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    // Perform arithmetic operation based on operator
    double result;
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero" << endl;
                return 1; // Exit with error
            }
            break;
        case '%':
            if (num2 != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2); // Modulus only works with integers
            } else {
                cout << "Error: Modulus by zero" << endl;
                return 1; // Exit with error
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
            return 1; // Exit with error
    }

    // Output
    cout << "Result: " << result << endl;

    return 0;
}
