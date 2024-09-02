// Create a C program that implements a basic calculator using functions for addition, subtraction, multiplication, and division.

//Answer:

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if (num2 != 0)
                result = divide(num1, num2);
            else {
                printf("Error! Division by zero.\n");
                return -1; 
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return -1; 
    }
    printf("Result: %d %c %d = %d\n", num1, operator, num2, result);

    return 0;
}
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
    return a / b;
}
