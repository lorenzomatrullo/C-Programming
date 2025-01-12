/*
    TRACCIA 5:
    Sviluppare una function C che, dati come parametri di input un array 2D di Int, il numero delle righe e il umero delle colonne, determina e restituisce come parametro di output il massimo tra le somme degli elementi di ogni riga.
*/

#include <stdio.h>

int maxSumRows(int array[][100], int ROWS, int COLS) {
    int maxSum = -1;

    for (int i = 0; i < ROWS; i++) {
        int sumRows = 0;

        for (int j = 0; j < COLS; j++) {
            sumRows = array[i][j] + sumRows;
        }

        if (sumRows > maxSum) {
            maxSum = sumRows;
        }
    }

    return maxSum;
}

int main() {

    int array[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int ROWS = sizeof(array)/sizeof(array[0]);
    int COLS = sizeof(array[0])/sizeof(array[0][0]);

    int result = maxSumRows(array, ROWS, COLS);

    printf("The maximum row sum is %d", result);

    return 0;
}