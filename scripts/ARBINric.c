#include <stdio.h>

// Function prototype
int binarySearch(int [], int, int, int);


int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int length = sizeof(array) / sizeof(array[0]);

    printf("\nWhich number do you wanna key: ");
    int key;
    scanf("%d", &key);


    int result = binarySearch(array, 0, length - 1, key);

    if(result != -1){
        printf("The element %d is present at index %d in the array.\n", key, result);
    } else {
        printf("The element %d is not present in the array.\n", key);
    }


    return 0;
}


int binarySearch(int array[], int left, int right, int key) {

    // If the left index exceeds the right index, the element is not present in the array
    if (left <= right) {
        int middle = (left + right) / 2;
        
        if (array[middle] == key){
            return middle;
        } else if (array[middle] > key){
            return binarySearch(array, left, middle - 1, key);
            // If the element is smaller than the middle element, search in the left part of the array
        } else {
            return binarySearch(array, middle + 1, right, key);
            // Otherwise, search in the right part of the array
        }
    }

    // If the element is not present in the array, return -1
    return -1;
}