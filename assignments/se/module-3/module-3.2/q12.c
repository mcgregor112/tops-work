// PATTERNS :

// :

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

//Answer:

#include <stdio.h>

int main() {
    int num = 5;
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num-row; col++){
            printf("  ", row);
        }
        for(int col = 1; col <= row; col++){
            printf("* ", row);
        }
        for(int col = 1; col < row; col++){
            printf("* ", row);
        }
       
        printf("\n", row);
    }
    
    return 0;
}

//2:

A 
A B 
A B C 
A B C D 
A B C D E 

// Answer :

#include <stdio.h>

int main() {
    int num = 5;
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            printf("%c ", col+64);
        }
        printf("\n", row);
    }
    
    return 0;
}

// 3:

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

// Answer :

#include <stdio.h>

int main() {
    int i, j, n = 5; 
    int num = 1; 

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}


// 4:

A 
B C 
D E F 
G H I J 
K L M N O 


// Answer :

#include <stdio.h>

int main() {
    int row, col, num = 5; 
    char c = 'A';    

    for (row = 1; row <= num; row++) {
        for (col = 1; col <= row; col++) {
            printf("%c ", c);
            c++; 
        }
        printf("\n");
    }

    return 0;
}


// 5:

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

//Answer:

#include <stdio.h>

int main() {
    int num = 6;
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            printf("* ", row);
        }
        printf("\n", row);
    }
     for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num-row; col++){
            printf("* ", row);
        }
        printf("\n", row);
    }
    
    return 0;
}

// 6:

1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1 

#include <stdio.h>

int main() {
    int row, col, num = 5;

    for (row = 1; row <= num; row++) {
        for (col = 1; col <= row; col++) {
            
            if (col % 2 == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
