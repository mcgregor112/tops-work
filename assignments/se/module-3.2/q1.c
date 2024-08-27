//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)

#include<stdio.h>

int main(){
    
    char operator;
    double num1 , num2 , result;
    printf("Simple Calculator\n");
    printf("Select an operation:\n");
    printf(" + for Addition\n");
    printf(" - for Subtraction\n");
    printf(" * for Multiplication\n");
    printf(" / for Division\n");
    printf(" %% for Modulo\n"); // Note: %% is used to print a single % character
    printf("Enter your choice: ");
    scanf(" %c", &operator);
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
     
    
