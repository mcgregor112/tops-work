//q.7 Write a Program of Two 1D Matrix Addition using Operator Overloading

//Answer:

#include <iostream>
using namespace std;

class Matrix {
    int arr[5]; 

public:
    void input(int matrixNumber) {
        cout<<"Enter 5 elements of Matrix "<matrixNumber<<": ";
        for (int i = 0; i < 5; i++) {
            cin>>arr[i];
        }
    }
    Matrix operator+(Matrix &m) {
        Matrix temp;
        for (int i = 0; i < 5; i++) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

    void display(int matrixNumber) {
        cout<<": ";
        for (int i = 0; i < 5; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    Matrix matrix1, matrix2, matrix3;
    matrix1.input(1);
    matrix2.input(2);
    matrix3 = matrix1 + matrix2;


    cout<<"Result of Matrix 1 + Matrix 2";
    matrix3.display(3);

    return 0;
}
