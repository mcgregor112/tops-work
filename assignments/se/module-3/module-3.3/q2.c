// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

// Answer :

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        }
        
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result of %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result of %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result of %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result of %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice! Please choose a number between 1 and 5.\n");
        }
        printf("\n"); 
    }

    return 0;
}
