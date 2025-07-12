#include <iostream>
#include <cmath>

using namespace std;

int calculator(int num1, int num2, char operation) {
    int result;

    switch(operation) {
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
                cout << "Error: Division by zero." << endl;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            cout << "Invalid operation." << endl;
        }
    return result;
    }

int main() {
    cout << calculator(5, 3, '+') << endl; // Example usage
    cout << calculator(5, 3, '-') << endl; // Example usage
    cout << calculator(5, 3, '*') << endl; // Example usage
    cout << calculator(5, 3, '/') << endl; // Example usage
    cout << calculator(5, 3, '^') << endl; // Example usage
    cout << calculator(5, 0, '/') << endl; // Division by zero example
    cout << calculator(5, 3, '%') << endl; // Invalid operation example
    return 0;
}
