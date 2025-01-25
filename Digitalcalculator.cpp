#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

void menu() {
    cout << "-----------------------------------\n";
    cout << "          DIGITAL CALCULATOR       \n";
    cout << "-----------------------------------\n";
    cout << "  ADD      |   SUB      |   DIV    \n";
    cout << "  MUL      |   MOD      |   POWER  \n";
    cout << "  SQRT     |   LOG      |   FACTORIAL\n";
    cout << "  SIN      |   COS      |   TAN    \n";
    cout << "-----------------------------------\n";
    cout << "  Enter 'Q' to Quit\n";
    cout << "-----------------------------------\n";
}

int main() {
    char choice;
    double num1, num2, result;

    do
    {
        menu();
        cout << "Enter your choice (Q to quit): ";
        cin >> choice;

        if (choice == 'Q' || choice == 'q') {
            cout << "Exiting the calculator. Goodbye!\n";
            break;
        }

        switch (choice) 
        {
            case '+': // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;

            case '-': // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;

            case '*': // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;

            case '/': // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;

            case '^': // Power
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 's': // Square root
                cout << "Enter a number: ";
                cin >> num1;
                result = sqrt(num1);
                cout << "Result: " << result << endl;
                break;

            case 'l': // Logarithm
                cout << "Enter a number: ";
                cin >> num1;
                result = log(num1);
                cout << "Result: " << result << endl;
                break;

            case '!': // Factorial
                cout << "Enter an integer: ";
                int n;
                cin >> n;
                result = factorial(n);
                cout << "Result: " << result << endl;
                break;

            case 'S': // Sine
                cout << "Enter angle in radians: ";
                cin >> num1;
                result = sin(num1);
                cout << "Result: " << result << endl;
                break;

            case 'C': // Cosine
                cout << "Enter angle in radians: ";
                cin >> num1;
                result = cos(num1);
                cout << "Result: " << result << endl;
                break;

            case 'T': // Tangent
                cout << "Enter angle in radians: ";
                cin >> num1;
                result = tan(num1);
                cout << "Result: " << result << endl;
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

        cout << "\n";
    } while (true);

return 0;
}
