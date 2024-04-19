#include <stdio.h>

int binary_search(int [], int, int);

int main(){

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_length = sizeof(array)/sizeof(array[0]);


    for(int i = 0; i < array_length; i++){
        printf("%d ", array[i]);
    }

    printf("\nWhich number do you wanna find: ");
    int find;
    scanf("%d", &find);

    int position = binary_search(array, array_length, find);

    if(position != -1){
        printf("The element %d was found at position %d\n", find, position);
    } else {
        printf("The element %d was not found in the list\n", find);
    }


    return 0;
}


int binary_search(int array[], int array_length, int find){
    int left = 0;
    int right = array_length - 1;

    while(left <= right){
        int middle = (left + right) / 2;

        if (array[middle] == find){
            return middle;
        } else if (array[middle] < find){
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1; // Element not found
}