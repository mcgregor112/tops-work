//q.8 Write a program to concatenate the two strings using Operator Overloading

// Answer :
#include <iostream>
#include <string>
using namespace std;

class Concatenate {
    string str;

public:
    void input() {
        cout << ": ";
        getline(cin, str);
    }

    Concatenate operator+(Concatenate &s) {
        Concatenate temp;
        temp.str = str + s.str; 
        return temp;
    }
    void display() {
        cout<<"Concatenated String: "<<str<<endl;
    }
};

int main() {
    Concatenate s1, s2, s3;
    cout<<"Enter first string";
    s1.input();
    
    cout<<"Enter second string";
    s2.input();
    s3 = s1 + s2;
    s3.display();

    return 0;
}
