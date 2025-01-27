#include <stdio.h>

// Recursive sum function prototype
int sum(int [], int);


int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    
    // Call the sum function and print the result
    printf("The sum of the array elements is: %d\n", sum(array, size));

    return 0;
}


// Definition of the recursive sum function
int sum(int array[], int size) {
    // Base case: when the array size is 0, the sum is 0
    if (size == 0) {
        return 0;
    } else {
        // The sum is the current element plus the sum of the remaining elements
        return array[size - 1] + sum(array, size - 1);
    }
}