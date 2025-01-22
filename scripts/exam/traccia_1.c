/*
    TRACCIA 1
    Sviluppare una function C che, dati come parametri di input unarray di int e il suo size.
    Determina e restituisce come parametro di output il secondo più grande elmento dell'array.
    Non bisogna seguire l'ideaa di ordinare prima l'array.
*/

#include <stdio.h>

int secondMax(int array[], int size) {
    if (size < 2) {
        // There is no second element if the array has fewer than 2 elements
        return -1;  // Error value
    }

    int max1 = array[0];
    int max2 = array[1];

    if (max1 < max2) {
        max1 = array[1];
        max2 = array[0];
    }

    for (int i = 2; i < size; i++) {
        if (array[i] > max1) {
            max2 = max1;
            max1 = array[i];
        } else if (array[i] > max2 && array[i] != max1) {
            max2 = array[i];
        }
    }
    return max2;
}

int main() {
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int size = sizeof(array) / sizeof(array[0]);

    int result = secondMax(array, size);
    printf("The second largest element is: %d\n", result);

    return 0;
}