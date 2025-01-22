/*
    TRACCIA 2
    Sviluppare una function C che, dato come parametro di input un array di tipo struct punto {double x; double y;}
    e il suo size, determina e restituisce come parametri di output gli indici dei due punti che hanno distanza minima tra loro.
    I campi x e y contengono l'ascissa e l'ordinata, rispettivamente, di un punto.
*/

#include <stdio.h>
#include <math.h>

struct punto {
    double x;
    double y;
};

double distanzaMinima(struct punto array[], int size, int *index1, int *index2) {
    if (size < 2) return;  // Non ci sono abbastanza punti per calcolare la distanza

    *index1 = 0;
    *index2 = 1;
    double min_dist = sqrt(
        (array[1].x - array[0].x) * (array[1].x - array[0].x) + 
        (array[1].y - array[0].y) * (array[1].y - array[0].y)
    );

    // Confronta tutte le coppie di punti
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            double dist = sqrt(
                (array[j].x - array[i].x) * (array[j].x - array[i].x) + 
                (array[j].y - array[i].y) * (array[j].y - array[i].y)
            );
            if (dist < min_dist) {
                min_dist = dist;
                *index1 = i;
                *index2 = j;
            }
        }
    }
}

int main() {
    // Array di punti di esempio
    struct punto array[] = {{0.0, 0.0}, {1.0, 1.0}, {2.0, 2.0}};
    int size = sizeof(array) / sizeof(array[0]);
    int index1, index2;

    // Chiamata alla funzione per trovare i due punti con la distanza minima
    distanzaMinima(array, size, &index1, &index2);
    
    // Stampa degli indici dei due punti con la distanza minima
    printf("I punti con la distanza minima sono agli indici %d e %d\n", index1, index2);

    return 0;
}