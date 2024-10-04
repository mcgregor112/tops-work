//q.10 Write a program to swap the two numbers using friend function without
// using third variable

//Answer:

#include <iostream>
using namespace std;

class Swap {
    int a, b;

public:
    void input() {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }

    friend void swap(Swap &s);

    void display() {
        cout<<"a = "<<a<< ", b = "<<b<<endl;
    }
};

void swap(Swap &s) {
    s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;
}

int main() {
    Swap s;
    s.input();
    cout<<"Before swapping: ";
    s.display();

    swap(s);
    cout<<"After swapping: ";
    s.display();

    return 0;
}
