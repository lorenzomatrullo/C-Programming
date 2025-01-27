#include <stdio.h>

void AOSMAX (char array[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int max_index = i;

        for (int j = 0; j < i; j++) {
            if (array[j] > array[max_index]) {
                max_index = j;
            }
        }

        int temp = array[max_index];
        array[max_index] = array[i];
        array[i] = temp;
    }
}