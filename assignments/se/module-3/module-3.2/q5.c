//  Looping programs:

// 1. WAP to print 972 to 897 using for loop

// Answer: 
#include <stdio.h>

int main() {
    int i;

    for (i = 972; i >= 897; i--) {
        printf("%d\n", i);
    }

    return 0;
}



// 2. WAP to take 10 no. Input from user and find out …

//Answer :

#include <stdio.h>

int main() {
    int numbers[10];
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;
    int i, num;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenSum += numbers[i];
        } else {
            oddCount++;
            oddSum += numbers[i];
        }
    }
    printf("Total even numbers: %d\n", evenCount);   // How many Even numbers are there
    printf("Total odd numbers: %d\n", oddCount);     // How many odd numbers are there
    printf("Sum of even numbers: %d\n", evenSum);    // Sum of even numbers
    printf("Sum of odd numbers: %d\n", oddSum);      // Sum of odd numbers

    return 0;
}
