#include <iostream>
#include <iomanip>

using namespace std;

class Calculator
 {
public:
    void choices();
    void getInput();
    void oprator();

private:
    char operation;
    double num1, num2;

    void add();
    void subtract();
    void multiply();
    void divide();
    void all();
};

void Calculator::choices() 
{
    cout << "====================================" << endl;
    cout << "Arithmetic Calculator" << endl;
    cout << "=====================================" << endl;
    cout << "Select your choice" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. All operations (+, -, *, /)" << endl;
    cout << "Enter your choice: ";
}

void Calculator::getInput() 
{
    choices();
    cin >> operation;

    if (operation != '5') 
    {
        cout << "Enter 1st number: ";
        cin >> num1;
        cout << "Enter 2nd number: ";
        cin >> num2;
    }
}

void Calculator::oprator()
 {
    switch (operation) {
        case '1':
            add();
            break;
        case '2':
            subtract();
            break;
        case '3':
            multiply();
            break;
        case '4':
            divide();
            break;
        case '5':
            all();
            break;
        default:
            cout << "Error: Invalid choice" << endl;
            break;
    }
}

void Calculator::add()
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

void Calculator::subtract()
{
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}

void Calculator::multiply() 
{
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}

void Calculator::divide() 
{
    if (num2 != 0)
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    else
        cout << "Error: Division by zero is not allowed." << endl;
}

void Calculator::all() 
{
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    add();
    subtract();
    multiply();
    divide();
}

int main() 
{
    Calculator calc;
    calc.getInput();
    calc.oprator();
    return 0;
}
