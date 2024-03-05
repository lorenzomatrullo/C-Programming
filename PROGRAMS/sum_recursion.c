#include <stdio.h>

// Recursive function to calculate the sum of numbers in an array
int sumNumbersRecursive(int [], int);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int array_length = sizeof(array)/sizeof(array[0]);


    // Call the recursive function to calculate the sum of numbers
    int result = sumNumbersRecursive(array, array_length);
    printf("The sum of numbers is: %d\n", result);

    return 0;
}


int sumNumbersRecursive(int array[], int length) {
    // Base case: if the length is 0, return 0
    if (length == 0) {
        return 0;
    }
    // Recursive case: sum the current element with the sum of the rest of the array
    return array[length - 1] + sumNumbersRecursive(array, length - 1);
}