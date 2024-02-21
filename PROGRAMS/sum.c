#include <stdio.h>

// Function to calculate the sum of numbers in an array
int sumNumbers(int [], int);


int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Call the function to calculate the sum of numbers
    int result = sumNumbers(numbers, length);

    printf("The sum of numbers is: %d\n", result);

    return 0;
}


int sumNumbers(int numbers[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += numbers[i];
    }
    return sum;
}