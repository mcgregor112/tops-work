// WAP to show difference between Structure and Union.

//Answer :

#include <stdio.h>

struct Person {
    int age;
    char name[20];
    float salary;
};

union Data {
    int integer;
    float decimal;
    char character;
};

int main() {
    struct Person person1;
    union Data data;

    person1.age = 30;
    strcpy(person1.name, "Alice");
    person1.salary = 50000.0;

    printf("Structure:\n");
    printf("Age: %d\n", person1.age);
    printf("Name: %s\n", person1.name);
    printf("Salary: %.2f\n\n", person1.salary);

    data.integer = 10;
    data.decimal = 3.14;
    data.character = 'A';

    printf("Union:\n");
    printf("Integer: %d\n", data.integer);
    printf("Decimal: %.2f\n", data.decimal);
    printf("Character: %c\n", data.character);

    return 0;
}