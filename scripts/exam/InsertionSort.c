/*
    INSERTION SORT
*/

#include <stdio.h>

void insertionSort(int *array, int size) {

    for (int i = 0; i < size; i++) {
        int key = array[i]; // Element to be inserted into sorted portion

        int j = i - 1;
        // Move elements of array[0 ... i - 1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key; // Place the key in the correct position
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {12, 11, 13, 5, 6};
    int size = sizeof(array)/sizeof(array[0]);

    printf("Original Array: ");
    printArray(array, size);

    insertionSort(array, size);

    printf("Sorted Array: ");
    printArray(array, size);

    return 0;
}