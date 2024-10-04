// q.11 Write a program to find the max number from given two numbers using
// friend function

//Answer :

#include <iostream>
using namespace std;

class Max {
    int a, b;

public:
    void input() {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }

    friend void findMax(Max m);

    void display() {
        cout<<"a = "<<a<<", b = "<<b<<endl;
    }
};

void findMax(Max m) {
    if (m.a > m.b)
        cout<<"Maximum number is: "<<m.a<<endl;
    else
        cout<<"Maximum number is: "<<m.b<<endl;
}

int main() {
    Max m;
    m.input();
    findMax(m);

    return 0;
}
