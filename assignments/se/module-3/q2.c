// WAP to find area of circle, rectangle and triangle

// find area of circle :

#include<stdio.h>

float pi = 3.14;

int main(){
    
    float r;
    float area;
    printf("\nenter the value of r: ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("%2.f\n", area);
    
}



// find area of rectangle :


#include <stdio.h>

int main(){
    
    float l , b , area;
    printf("\nEnter value of l : ");
    scanf("\n%f",&l);
    printf("\nEnter value of b : ");
    scanf("\n%f",&b);
    area = l*b;
    printf("\n%f",area);
    
    } 

// find area of triangle :


#include <stdio.h>

int main(){
    
    float base , height , area;
    printf("\nEnter value of base : ");
    scanf("\n%f",&base);
    printf("\nEnter value of height : ");
    scanf("\n%f",&height);
    area = 0.5*base*height;
    printf("\n%f",area);
    
    } 

