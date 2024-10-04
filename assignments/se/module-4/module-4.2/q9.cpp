//q.9 Write a program to calculate the area of circle, rectangle and triangle using
//Function Overloading
// Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area

//Answer:

#include<iostream>
using namespace std;

class AreaCalculator {
public:
    int area(int length, int breadth) {
        return length * breadth;
    }

    float area(float base, float height) {
        return 0.5 * base * height;
    }

    float area(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    AreaCalculator ac;
    cout<<"Area of Rectangle: "<<ac.area(5, 3)<<endl;
    cout<<"Area of Triangle: "<<ac.area(5.0f, 4.0f)<<endl;
    cout<<"Area of Circle: "<<ac.area(3.0)<<endl;

    return 0;
}
