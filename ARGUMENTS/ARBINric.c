#include <stdio.h>

// Function prototype
int binarySearch(int [], int, int, int);


int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int length = sizeof(array) / sizeof(array[0]);

    printf("\nWhich number do you wanna find: ");
    int find;
    scanf("%d", &find);


    int result = binarySearch(array, 0, length - 1, find);

    if(result != -1){
        printf("The element %d is present at index %d in the array.\n", find, result);
    } else {
        printf("The element %d is not present in the array.\n", find);
    }


    return 0;
}


// Recursive binary search function
int binarySearch(int array[], int left, int right, int find) {

    // If the left index exceeds the right index, the element is not present in the array
    if (left <= right) {
        // Calculate the middledle index of the array
        int middle = (left + right) / 2;

        // If the element is present at the middledle index, return the index
        if (array[middle] == find){
            return middle;
        } else if (array[middle] > find){
            return binarySearch(array, left, middle - 1, find);
            // If the element is smaller than the middle element, search in the left part of the array
        } else {
            return binarySearch(array, middle + 1, right, find);
            // Otherwise, search in the right part of the array
        }
    }

    // If the element is not present in the array, return -1
    return -1;
}