#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *, int);

int main(){

    int a1[] = {1, 2, 3, 4, 5};
    int a1_length = sizeof(a1)/sizeof(a1[0]);

    int a2[] = {99, 59, 39, 70, 80, 90, 100, 50};
    int a2_length = sizeof(a2)/sizeof(a2[0]);

    int *a1_copy = array_copy(a1, a1_length);
    int *a2_copy = array_copy(a2, a2_length);

    for(int i = 0; i < a1_length; i++){
        printf("a1_copy[%d] = %d\n", i, a1_copy[i]);
    }

    printf("\n");

    for(int i = 0; i < a2_length; i++){
        printf("a2_copy[%d] = %d\n", i, a2_copy[i]);
    }

    return 0;
}

int *array_copy(int *array, int length){
    
    int *c = malloc(length * sizeof(int));

    for(int i = 0; i < length; i++){
        c[i] = array[i];
    }
    return c;
}