#include <stdio.h>

void AOSMIN (int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}