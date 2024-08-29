//18] Write a C program to implement a simple calculator using switch-case statements that performs addition, subtraction, multiplication,division.

// Answer :

#include<stdio.h>
int main(){
    
    char operator;
    double num1 , num2 , result;
    printf("Simple Calculator\n");
    printf("Enter your choice: (+ , - , * , / ) :");
    scanf(" %c", &operator);
    printf("Enter two operands :");
    scanf(" %lf %lf ", &num1,&num2);
    
    switch (operator){
        case '+':
        result = num1 + num2;
        printf("%.lf + %.lf = %.lf\n " , num1 , num2 ,result);
        break;
        case '-':
        result = num1 - num2;
        printf("%.lf - %.lf = %.lf\n " , num1 , num2 ,result);
        break;
        case '*':
        result = num1 * num2;
        printf("%.lf * %.lf = %.lf\n " , num1 , num2 ,result);
        break;
        case '/':
        if (num2 != 0.0){
            result = num1 / num2 ;
            printf("%.lf / %.lf = %.lf\n " , num1 , num2 ,result);
            break;
            }else{
                printf("invalid operands ");
            
            break ;
            }
       
        }

            
            
    }
     
    