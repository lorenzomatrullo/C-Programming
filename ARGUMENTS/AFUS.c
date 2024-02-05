#include <stdio.h>

void merge(int array1[], int array1_length, int array2[], int array2_length, int arrays_merged[]);

int main(){

    int array1[] = {0, 2, 4, 6, 8};
    int array1_length = sizeof(array1)/sizeof(array1[0]);

    int array2[] = {1, 3, 5, 7, 9};
    int array2_length = sizeof(array2)/sizeof(array2[0]);

    int arrays_merged_length = array1_length + array2_length;
    int arrays_merged[arrays_merged_length];

    merge(array1, array1_length, array2, array2_length, arrays_merged);

    printf("arrays_merged = ");
    for(int i = 0; i < arrays_merged_length; i++){
        printf("%d ", arrays_merged[i]);
    }

    return 0;
}

void merge(int array1[], int array1_length, int array2[], int array2_length, int arrays_merged[]){

    int i = 0, j = 0, k = 0;

    while(i < array1_length && j < array2_length){
        if(array1[i] < array2[j]){
            arrays_merged[k] = array1[i];
            i++;
        } else {
            arrays_merged[k] = array2[j];
            j++;
        }
        k++;
    }

    while(i < array1_length){
        arrays_merged[k] = array1[i];
        k++;
        i++;
    }

    while(j < array2_length){
        arrays_merged[k] = array2[j];
        k++;
        j++;
    }
}