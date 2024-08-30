// 20] Write a C program that uses a recursive function to calculate the Fibonacci sequence up to n terms.

//Answer :

#include <stdio.h>

int main(){
    
    int n, i, a = 0, b = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    return 0; 
}