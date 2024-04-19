// Algoritmo di Ordinamento per Selezione di Massimo (AOSMAX)
// Lo scopo di un Algoritmo di Ordinamento per Selezione di Massimo è ordinare un array di dati trovando ripetutamente l'elemento massimo nell'array e scambiarlo con l'ultimo elemento dell'array non ordinato, e spostarlo nella posizione corretta.

#include <stdio.h>

void AOSMAX(int [], int);
void printArray(int [], int);

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int size = sizeof(array)/sizeof(array[0]);

    AOSMAX(array, size);
    printArray(array, size);

    return 0;
}

void AOSMAX(int array[], int size) {
    for (int i = size - 1; i > 0; i--) {
        // 1. Inizia dal fondo dell'array
        int max_index = i;

        // 2. Trova l'indice del massimo elemento nell'array non ordinato
        for (int j = 0; j < i; j++) {
            if (array[j] > array[max_index]) {
                max_index = j;
            }
        }

        // 3. Scambia l'elemento massimo trovato con l'ultimo elemento non ordinato
        int temp = array[max_index];
        array[max_index] = array[i];
        array[i] = temp;
    }
}


void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}