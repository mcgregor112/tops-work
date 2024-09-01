// WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746

//Answer:

#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reverse = reverse * 10 + num % 10; 
        num = num / 10;                    
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
