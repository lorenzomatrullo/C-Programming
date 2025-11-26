#include <stdio.h>

int sum(int[], int);

int main(){

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_length = sizeof(array)/sizeof(array[0]);


    int result = sum(array, array_length);
    printf("Array1 sum: %d", result);

    return 0;
}

int sum(int array[], int length){

    int sum = 0;

    for(int i = 0; i < length; i++){
        sum = sum + array[i];        
    }

    return sum;
}