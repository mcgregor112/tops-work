// Display This Information using printf
//1. Your Name
//2. Your Birth date
//3. Your Age
//4. Your Address



#include<stdio.h>
struct info
{

    char name;
    char dob;
    int age;
    char address;
};
int main()
{
    struct info s;
    printf("Enter your name:");
    scanf("%s",&s.name);
    printf("Enter your dob:");
    scanf("%s",&s.dob);
    printf("Enter your age:");
    scanf("%d",&s.age);
    printf("Enter your address:");
    scanf("%s",&s.address);

    printf("sname: %s\n",s.name);
    printf("sname: %s\n",s.dob);
    printf("sname: %d\n",s.age);
    printf("sname: %s\n",s.address);

    return 0;

    }


