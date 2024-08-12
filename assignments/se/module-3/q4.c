//WAP to check if the given year is a leap year or not.

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