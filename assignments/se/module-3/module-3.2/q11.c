// Write a program you have to make a summation of first and last Digit

//Answer :

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = (num < 0) ? -num : num;

    lastDigit = num % 10;

    while (num >= 10) {
        num = num / 10;
    }
    firstDigit = num;
    int sum = firstDigit + lastDigit;
    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);
    printf("Summation of the first and last digits = %d\n", sum);

    return 0;
}
