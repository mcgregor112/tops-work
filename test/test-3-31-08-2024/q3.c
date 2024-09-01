// 3] Write a C program to calculate the sum of the digits of an integer number entered by the user.

//Answer

#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  
        sum += digit;      
        num /= 10;      
    }
    printf("Sum of the digits: %d\n", sum);

    return 0;
}