// WAP to print factorial of given number

//Answer :

#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; 
    int i;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i; 
        }
        
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
