// Write a program of structure for five employee that provides the following
//  information -print and display empno, empname, address and age

//Answer:

#include <stdio.h>
#include <string.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee employees[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter information for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }
    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n\n", employees[i].age);
    }

    return 0;
}