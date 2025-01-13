#include <stdio.h>

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements
            if(array[j] > array[j + 1]) {
                // Swap if elements are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        printf("Array after pass %d: ", i + 1);
        printArray(array, size);
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array)/sizeof(array[0]);

    printf("Original Array: ");
    printArray(array, size);

    bubbleSort(array, size);

    printf("Sorted Array: ");
    printArray(array, size);


    return 0;
}