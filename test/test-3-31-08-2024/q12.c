// 12] Write a C program to find the factorial of a number using both iterative and recursive approaches.

//Answer:

#include<stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main(){
    
    int n;
    unsigned long long factorial = 1 ;
    printf("Enter a value for n :");
    scanf("%d",&n);
    
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; 
        }
        
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
    
}