#include <stdio.h>

int main(){

    // assigning manually the number of rows and cols
    int ROWS, COLS;

    printf("Enter the number of rows and cols: ");
    scanf("%d %d", &ROWS, &COLS);

    int data[ROWS][COLS];

    // assigning manually the values of each slot
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("data[%d][%d]=", i, j);
            scanf("%d", &data[i][j]);
        }
    }


    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("returned data[%d][%d]=%d\n", i, j, data[i][j]);
        }
    }



    return 0;
}