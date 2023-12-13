#include <stdio.h>
#define ROWS 4
#define COLS 5

int print2DArray(int array[ROWS][COLS]){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int array[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    print2DArray(array);

    return 0;
}