#include <stdio.h>

int reverse(int[], int);

int main(){

    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array1_length = sizeof(array1)/sizeof(array1[0]);

    reverse(array1, array1_length);

    for(int i = 0; i < array1_length; i++){
        printf("array1[%d] = %d\n", i, array1[i]);
    }

    return 0;
}

int reverse(int array[], int length){

    /*
        Uses the temp variable to swap corresponding values at the start and end of the array,
        incrementing by 1 until we reach the middle of the array
    */

    int temp = 0;

    for(int i = 0; i < (length / 2); i++){
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}