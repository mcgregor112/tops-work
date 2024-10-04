// q.5 Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the marks
// obtained in two subjects and class result contains the total marks obtained in
// the test. The class result can inherit the details of the marks obtained in the
// test and roll number of students. (Multilevel Inheritance)

//Answer :

#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;

public:
    void inputRollNumber() {
        cout<<"Enter roll number: ";
        cin>>rollNumber;
    }

    void displayRollNumber() {
        cout<<"Roll Number: "<<rollNumber<<endl;
    }
};

class Test : public Student {
protected:
    int marks1, marks2;

public:
    void inputMarks() {
        inputRollNumber();
        cout<<"Enter marks for subject 1: ";
        cin>>marks1;
        cout<<"Enter marks for subject 2: ";
        cin>>marks2;
    }

    void displayMarks() {
        cout<<"Marks1: "<<marks1<<endl;
        cout<<"Marks2: "<<marks2<<endl;
    }
};

class Result : public Test {
public:
    void displayResult() {
        displayRollNumber();
        displayMarks();
        int total = marks1 + marks2;
        cout<<"Total Marks: "<<total<<endl;
    }
};

int main() {
    Result r;
    r.inputMarks();
    r.displayResult();

    return 0;
}
