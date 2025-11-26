#include <stdio.h>

int ricercaBinariaRicorsiva(int array[], int left, int right, int key) {

    // If the left index exceeds the right index, the element is not present in the array
    if (left <= right) {
        int middle = (left + right) / 2;
        
        if (array[middle] == key){
            return middle;
        } else if (array[middle] > key){
            return ricercaBinariaRicorsiva(array, left, middle - 1, key);
            // If the element is smaller than the middle element, search in the left part of the array
        } else {
            return ricercaBinariaRicorsiva(array, middle + 1, right, key);
            // Otherwise, search in the right part of the array
        }
    }

    // If the element is not present in the array, return -1
    return -1;
}


// complessità log2(n)