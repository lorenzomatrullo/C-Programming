#include <stdio.h>

int find_min(int array[], int length);


int main(){

    int array1[] = {5, 9, 10, 11, 4, 3, 8, 6, 7};
    int array1_length = sizeof(array1)/sizeof(array1[0]);

    int min1 = find_min(array1, array1_length);

    printf("Minimum: %d", min1);

    return 0;
}

int find_min(int array[], int length){

    int min;
    min = array[0];

    for(int i = 0; i < length; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    
    return min;
}