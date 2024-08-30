// 15] Write a C program that uses a for loop to calculate the sum of the first 10 natural numbers.

//Answer :

#include <stdio.h>

int main() {
    int n = 0 ;
    for(int i = 1; i <= 10 ; i++){
        n += i;
    }
    printf("sum of first 10 natural no. : %d\n" ,n);
    return 0;
}