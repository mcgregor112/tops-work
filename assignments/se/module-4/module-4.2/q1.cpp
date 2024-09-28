// Q :WAP to create simple calculator using class

// Answer :

#include <iostream>
using namespace std;


class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            cout<<"Invalid : num should be greater than 0"<<endl;
            return 0; 
        }
    }
};

int main() {
    Calculator c1;
    int num1 , num2 , result;
    char operation;

    cout<<"Enter operation (+, -, *, /): ";
    cin>>operation;
    
    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    switch (operation) {
        case '+':
            result = c1.add(num1, num2);
            break;
        case '-':
            result = c1.subtract(num1, num2);
            break;
        case '*':
            result = c1.multiply(num1, num2);
            break;
        case '/':
            result = c1.divide(num1, num2);
            break;
        default:
            cout<<"Invalid operation!"<<endl;
            return 1;
    }

    cout<<"Result: "<<result<<endl;
    return 0;
}
