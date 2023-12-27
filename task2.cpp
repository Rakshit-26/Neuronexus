// TASK 2 - SIMPLE CALCULATOR

// Develop a calculator program that performs basic arithmetic operations such as addition, subtraction,
// multiplication, and division. Allow the user to input two numbers and choose an operation to perform.

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    double num1, num2;
    char op;

    cout<<"SIMPLE CALCULATOR\n";
    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Choose an operation (+, -, *, /): ";
    cin>>op;

    switch (op) {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<"\n";
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<"\n";
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<"\n";
            break;
        case '/':
            if (num2 != 0) {
                cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<"\n";
            } else {
                cout<<"Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout<<"Invalid operation\n";
            break;
    }
    return 0;
}
