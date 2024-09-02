// 7] Develop a C program that checks whether a given string is a palindrome without using built-in functions.

//Answer:

#include <string.h>
#include <stdio.h>

int main(){
    
    int length = 0, i, isPalindrome = 1;
    
    char str[100];
    printf("Enter a string :");
    scanf("%s",&str);
    
     while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;

}
