// 19] Write a C program to find the length of a string without using any built-in functions.

// Answer :

#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); // why we should not use gets  

    int length = stringLength(str);

    printf("Length of the string is: %d\n", length);

    return 0;
}