#include <stdio.h>
#define ROWS 3
#define COLS 3

int print2DArray(int [ROWS][COLS]);

int main(){

    int list[ROWS][COLS] = {
        {1, 2, 3,},
        {4, 5, 6},
        {7, 8, 9}
    };

    print2DArray(list);

    return 0;
}

int print2DArray(int array[ROWS][COLS]){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%4d ", array[i][j]);
        }
        printf("\n"); // after every row ended there is gonna be a new line.
    }
}