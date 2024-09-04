// 7] Develop a C program that checks whether a given string is a palindrome without using built-in functions.

//Answer:

#include<stdio.h>

int main(){
    
    char str[100];
    printf("Enter a string :",str);
    scanf("%c",&str);
    
        if (str[0] != str[-1]) {
            printf("this string is  palindrome");
        }else{
            printf("this string is not plaindrome");
        }
    
}
