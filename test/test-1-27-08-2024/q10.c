//10] Write a function in C that takes an array of integers and its size as input and returns the sum of all elements in the array.

//Answer :

#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sumArray(arr, size);
    printf("Sum of the array elements: %d\n", result);
    return 0;
}
