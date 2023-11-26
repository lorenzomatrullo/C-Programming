#include <stdio.h>

int find_max(int array[], int length);


int main(){

    int array1[] = {8, 7, 5, 3, 9, 10, 1, 2, 4};
    int array1_length = sizeof(array1)/sizeof(array1[0]);

    int max1 = find_max(array1, array1_length);

    printf("Maximum: %d", max1);

    return 0;
}

int find_max(int array[], int length){

    int max;
    max = array[0];

    for(int i = 0; i < length; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
}