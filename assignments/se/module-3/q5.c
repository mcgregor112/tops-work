// WAP to convert years into days and days into years

// convert year into days:

    #include<stdio.h>

int main(){
    
    int year , months , days , weeks;
    printf("enter days value :");
    scanf("\n%d",&days);
    year = days/365;
    months = (days%365) / 30;
    weeks = ((days%365)%30) / 7;
    days = (((days%365)%30)%7);
    printf("%d year\n %d months \n %d weeks \n %d days",year,months,weeks,days);
    
    }

// convert days into year(s):

#include<stdio.h>

int main(){
    
    int year , months , days , weeks;
    printf("enter year(s)  :");
    scanf("\n%d",&year);
    days = year*365;
    printf("\n %d days",days);
    
    }