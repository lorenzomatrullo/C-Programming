#include <stdio.h>
#include <string.h>

int ricercaBinariaIterativa (char *array, int size, char key[]) {
    int left = 0;
    int right = size - 1;
    int key_size = strlen(key);

    while (left <= right) {
        int middle = (left + right) / 2;
        int cmp = strncmp(key, array[middle], key_size);

        if (array[middle] == key) {
            return middle;
        } else if (array[middle] < key) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}