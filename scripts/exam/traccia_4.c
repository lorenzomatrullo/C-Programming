/*
    TRACCIA 4:
    Sviluppare una function C che, dati come parametri di input un array 2D di double.
    Il numero delle righe il numero delle colonne determina e restituisce come parametro di ouput il maxximo tra le somme degli elementi di ogni colonna.
*/

#include <stdio.h>

int maxSumCols (double array[][100], int ROWS, int COLS) {
    double maxSum = 0;

    for (int j = 0; j < COLS; j++) {
        double maxSumCols = 0;

        for (int i = 0; i < ROWS; i++) {
            maxSumCols = array[i][j] + maxSumCols;
        }

        if (maxSumCols > maxSum) {
            maxSum = maxSumCols;
        }
    }

    return maxSum;
}

int main() {
    double array[100][100] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };

    int ROWS = sizeof(array)/sizeof(array[0]);
    int COLS = sizeof(array[0])/sizeof(array[0][0]);

    double result = maxSumCols(array, ROWS, COLS);
    printf("The maximum of the column sums is: %.1lf", result);

    return 0;
}