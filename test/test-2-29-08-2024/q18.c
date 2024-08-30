// 18] Write a C program to check if a given number is even or odd using the modulo operator.

// Answer :

#include <stdio.h>

int main() {
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    
    if ( n % 2 == 0){
        printf("this even number .");
        }else{
            printf("this is odd number");
        }
    return 0;
}