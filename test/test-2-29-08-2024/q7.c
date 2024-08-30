//7] Write a while loop that prints numbers from 1 to 5.

//Answer :

#include <stdio.h>

int main() {
    int start = 1;
    int end = 5;
    while (start <= end){
        printf("%d\n", start);
        start++;
    }

    return 0;
}