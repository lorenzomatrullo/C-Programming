#include <stdio.h>

int sum(int[], int);

int main(){

    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array1_size = sizeof(array1)/sizeof(array1[0]);

    int array1_sum = sum(array1, array1_size);

    printf("Array1 sum: %d", array1_sum);

    return 0;
}

int sum(int array[], int length){

    int sum = 0;

    for(int i = 0; i < length; i++){
        sum = sum + array[i];        
    }
    return sum;

}