//13] Write a program in C that reverses a given string without using any built-in functions.

#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    int start, end;
    char temp;

    while (str[length] != '\0') {
        length++;
    }
