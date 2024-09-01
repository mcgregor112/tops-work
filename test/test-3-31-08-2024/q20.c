// 20] Implement a C program that converts temperature from Celsius to Fahrenheit using the formula F = (C × 9/5) + 32.

//Answer :
 
 #include <stdio.h>

int main() {
    int C , F;
    printf("Enter Celcius Degree :");
    scanf("%d",&C);
    F = (C * 9/5) + 32;
    printf("Fahrenheit of Entered Celcius is %d", F);
    
}