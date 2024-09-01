// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

//Answer:

#include <stdio.h>

int main() {
    int num, digit, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    while (num != 0) {
        digit = num % 10; 
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num = num / 10; 
    }
    printf("Max digit is %d\n", maxDigit);

    return 0;
}
