// 6] Create a C program that calculates the sum and average of elements in an array.

// Answer :

#include <stdio.h>

int main() {
    int n;
    int sum = 0, average;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / n;
    printf("Sum of the array elements: %d\n", sum);
    printf("Average of the array elements: %d\n", average);

    return 0;
}
