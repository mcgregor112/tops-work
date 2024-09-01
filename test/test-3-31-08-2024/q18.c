// 18] Create a C program that checks if a given year is a leap year.

//Answer :;

#include<stdio.h>

int main(){
    
    int year;
    printf("Enter year :");
    scanf("\n%d",&year);
    if(year%400==0){
        printf("\nthis year is leap year",year);
        }
        else {
            printf("\nthis is not a leap year");
        }
        
    
}