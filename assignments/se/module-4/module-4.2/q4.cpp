// q.4 Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)

// Answer:

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPersonData() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }

    void displayPersonData() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void inputStudentData() {
        inputPersonData();
        cout<<"Enter percentage: ";
        cin>>percentage;
    }

    void displayStudentData() {
        displayPersonData();
        cout<<"Percentage: "<<percentage<<"%"<<endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    void inputTeacherData() {
        inputPersonData();
        cout<<"Enter salary: ";
        cin>>salary;
    }

    void displayTeacherData() {
        displayPersonData();
        cout<<"Salary: Rs"<<salary<<endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout<<"Enter student details:"<<endl;
    s.inputStudentData();
    cout<<"Enter teacher details:"<<endl;
    t.inputTeacherData();

    cout<<"Student Details:"<<endl;
    s.displayStudentData();
    cout<<"Teacher Details:"<<endl;
    t.displayTeacherData();

    return 0;
}
