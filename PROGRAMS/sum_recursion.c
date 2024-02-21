#include <stdio.h>

// Recursive function to calculate the sum of numbers in an array
int sumNumbersRecursive(int [], int);


int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Call the recursive function to calculate the sum of numbers
    int result = sumNumbersRecursive(numbers, length);

    printf("The sum of numbers is: %d\n", result);

    return 0;
}


int sumNumbersRecursive(int numbers[], int length) {
    // Base case: if the length is 0, return 0
    if (length == 0) {
        return 0;
    }
    // Recursive case: sum the current element with the sum of the rest of the array
    return numbers[length - 1] + sumNumbersRecursive(numbers, length - 1);
}