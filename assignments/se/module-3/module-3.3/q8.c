// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

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
    struct Employee employee;
    printf("Enter employee number: ");
    scanf("%d", &employee.empno);

    printf("Enter employee name: ");
    scanf("%s", employee.empname);

    printf("Enter employee address: ");
    scanf("%s", employee.address);

    printf("Enter employee age: ");
    scanf("%d", &employee.age);
    printf("\nEmployee Information:\n");
    printf("Employee Number: %d\n", employee.empno);
    printf("Employee Name: %s\n", employee.empname);
    printf("Employee Address: %s\n", employee.address);
    printf("Employee Age: %d\n", employee.age);

    return 0;
}