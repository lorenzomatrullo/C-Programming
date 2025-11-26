// DIVIDE ET IMPERA APPROCH

#include <stdio.h>

// Recursive function for summing a subarray
int sum_subarray(int [], int, int);

// Main function for summing an array using the Divide and Conquer approach
int sum_array(int [], int);


int main() {
    int array[] = {1, 2, 3, 4, 5};
    int array_size = sizeof(array)/sizeof(array[0]);
    
    
    int result = sum_array(array, array_size);
    printf("The sum of the array elements is: %d\n", result);
    
    return 0;
}


int sum_subarray(int array[], int left, int right) {

    // Base case: empty array
    if (left > right) {
        return 0;
    } else if (left == right) {
        return array[left]; // Base case: array with a single element
    } else {
        // Find the middledle index of the array
        int middle = (left + right) / 2;
        
        // Recursive calls for the left and right halves of the array
        int left_sum = sum_subarray(array, left, middle);
        int right_sum = sum_subarray(array, middle + 1, right);
        
        // Sum the two partial sums
        return left_sum + right_sum;
    }
}


int sum_array(int array[], int array_length) {
    return sum_subarray(array, 0, array_length - 1);
} 