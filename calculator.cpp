#include <iostream>
#include <cmath>

using namespace std;

int main2()
{
    float num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation: ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch(operation)
    {
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
            result = num1 / num2;
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            result = 0;
            cout << "Invalid operation." << endl;
    }

    cout << "Result: " << result << endl;

    return 0;
}