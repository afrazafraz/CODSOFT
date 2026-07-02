#include <iostream>

using namespace std;

int main()
{
    double firstNumber, secondNumber, answer;
    char operation;

    cout << "==============================" << endl;
    cout << "      SIMPLE CALCULATOR" << endl;
    cout << "==============================" << endl;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "\nChoose an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation)
    {
        case '+':
            answer = firstNumber + secondNumber;
            cout << "\nResult = " << answer << endl;
            break;

        case '-':
            answer = firstNumber - secondNumber;
            cout << "\nResult = " << answer << endl;
            break;

        case '*':
            answer = firstNumber * secondNumber;
            cout << "\nResult = " << answer << endl;
            break;

        case '/':
            if(secondNumber == 0)
            {
                cout << "\nError! Division by zero is not allowed." << endl;
            }
            else
            {
                answer = firstNumber / secondNumber;
                cout << "\nResult = " << answer << endl;
            }
            break;

        default:
            cout << "\nInvalid operation selected." << endl;
    }

    return 0;
}