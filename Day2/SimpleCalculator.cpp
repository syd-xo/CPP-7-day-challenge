#include <iostream>

using namespace std;

//Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){
    double num1, num2, result;
    char operation;
    bool running = true;

    while (running) {
        cout << "\nEnter the first number: ";
        cin >> num1;

        cout << "Enter an operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter the second number: ";
        cin >> num2;

        switch (operation){
            case '+':
                result = add(num1, num2);
                cout << "Result: "<< result <<endl;
                break;

            case '-':
                result = subtract(num1, num2);
                cout << "Result: "<< result <<endl;
                break;    

            case '*':
                result = multiply(num1, num2);
                cout << "Result: "<< result <<endl;
                break;

            case '/':
                if (num2 != 0) {
                    result = divide(num1, num2);
                    cout << "Result: "<< result <<endl;
                } else {
                    cout << "Error: Division by zero is not allowed." <<endl;
                }
                break;

            default:
                cout << "Invalid operation. Please use +, -, *, or /." << endl;
        }

        char choice;
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N') {
            running = false;
            cout << "\nExiting calculator." << endl;
        }
    }

    return 0;
}

// Function definitions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
