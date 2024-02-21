// Algoritimo di Ordinamento per Selezione di Minimo

#include <stdio.h>

void AOSMIN(int [], int);
void printArray(int [], int);

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int size = sizeof(array)/sizeof(array[0]);

    // Applica l'algoritmo di ordinamento per selezione di minimo
    AOSMIN(array, size);
    printArray(array, size);

    return 0;
}

void AOSMIN(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Trova l'indice del minimo elemento nell'array non ordinato
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        // Scambia l'elemento minimo trovato con il primo elemento non ordinato
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}