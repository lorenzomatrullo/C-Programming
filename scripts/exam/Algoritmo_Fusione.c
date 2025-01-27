#include <stdio.h>

void Fusione (int array1[], int array2[], int size1, int size2, int arrayOutput[]) {
    int i_1 = 0, i_2 = 0; // Inizializza gli indici
    int size_output = size1 + size2;

    for (int i_output = 0; i_output < size_output; i_output++) {
        if (i_1 < size1 && i_2 < size2) {
            if (array1[i_1] < array2[i_2]) {
                arrayOutput[i_output] = array1[i_1];
                i_1++;
            } else {
                arrayOutput[i_output] = array2[i_2];
                i_2++;
            }
        } else if (i_2 >= size2) {
            arrayOutput[i_output] = array1[i_1];
            i_1++;
        } else {
            arrayOutput[i_output] = array2[i_2];
            i_2++;
        }
    }
}