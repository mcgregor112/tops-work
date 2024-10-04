// q.6 Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division Of two number using different parameters and ???Function Overloading

//Answer :

#include <iostream>
using namespace std;

class MathOperations {
public:

    int operate(int a, int b) {
        return a + b;
    }

    int operate(int a, int b, char op) {
        return a - b;
    }

    float operate(float a, float b) {
        return a * b;
    }

    float operate(double a, double b) {
        if (b != 0)
            return a / b;
        else
            return -1;
    }
};

int main() {
    MathOperations mo;
    cout<<"Addition: "<<mo.operate(5, 3)<<endl;
    cout<<"Subtraction: " <<mo.operate(5, 3, '-')<<endl;
    cout<<"Multiplication: "<<mo.operate(5.5f, 3.0f)<<endl;
    cout<<"Division: "<<mo.operate(10.0, 2.0)<<endl;

    return 0;
}
