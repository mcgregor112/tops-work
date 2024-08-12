// WAP to find simple interest

#include<stdio.h>

int main(){
    
    float p , r;
    int t;
    float si;
    printf("Enter value of p:");
    scanf("\n%f",&p);
    printf("Enter value of r:");
    scanf("\n%f",&r);
    printf("Enter value of t:");
    scanf("\n%d",&t);
    si = p*r*t/100;
    printf("%f",si);
    
    
}