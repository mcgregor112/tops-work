// Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)

#include<stdio.h>

int main(){
    
    char operator;
    double num1 , num2 , result;
    
    printf("Enter a operator : (+ , - , * , / , %%) :" );
    scanf("%c" , &operator);
    printf("Enter two operands : ");
    scanf(" %lf %lf " , &num1 , &num2);
    
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
            }
        case '%':
        if((int)num2 != 0){
            result = (int)num1 % (int)num2;
            printf("%d %% %d = %d", (int)num1 , (int)num2 , (int)result);
        }else{
            printf("invalid operand for num2");
        }
            break;
        }
            
            
    }
     
    
