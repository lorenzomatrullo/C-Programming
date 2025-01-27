#include <stdio.h>

int sum(int array[], int size) {
    // Base case: when the array size is 0, the sum is 0
    if (size == 0) {
        return 0;
    } else {
        // The sum is the current element plus the sum of the remaining elements
        return array[size - 1] + sum(array, size - 1);
    }
}

// complessità di spazio: n
// complessità di tempo: n - 1 somme