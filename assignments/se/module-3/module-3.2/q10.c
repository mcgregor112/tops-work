// Write a program make a summation of given number

//Answer:

 #include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = (num < 0) ? -num : num;
    while (num != 0) {
        digit = num % 10; 
        sum += digit;     
        num = num / 10;   
    }

    printf("Summation of the digits = %d\n", sum);

    return 0;
}
