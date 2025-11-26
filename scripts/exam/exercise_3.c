/*
    TRACCIA 3
    Sviluppare una function C che, dato come parametro di input un array di tipo struct punto {double x; double y;}
    e il suo size, determina e restituisce come parametro di output la massima distanza tra i punti.
    I campi x e y contengono l'ascissa e l'ordinata, rispettivamente, di un punto.
*/

#include <stdio.h>
#include <math.h>

struct punto {
    double x;
    double y;
};

double distanzaMassima(struct punto array[], int size) {
    if (size < 2) return 0;

    double max_dist = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size; j++) {
            double dist = sqrt(
                (array[j].x - array[i].x) * (array[j].x - array[i].x) +
                (array[j].y - array[i].y) * (array[j].y - array[i].y)
            );

            if (dist > max_dist) {
                max_dist = dist;
            }
        }
    }
    return max_dist;
}

int main() {

    struct punto array[] = {{0.0, 0.0}, {1.0, 1.0}, {3.0, 4.0}};
    int size = sizeof(array) / sizeof(array[0]);

    // Chiamata alla funzione per trovare la massima distanza
    double max_dist = distanzaMassima(array, size);
    
    // Stampa della massima distanza
    printf("La massima distanza tra i punti: %.2f\n", max_dist);

    return 0;
}