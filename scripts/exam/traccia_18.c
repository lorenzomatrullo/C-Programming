#include <stdio.h>

char mostFrequentCharacter(char *array, int array_size) {
    int maxCounter = 0;
    char maxCharacter = array[0];

    // Count occurrences of each character
    for (int i = 0; i < array_size; i++) {
        int count = 0;

        for (int j = 0; j < array_size; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        
        if (count > maxCounter) {
            maxCounter = count;
            maxCharacter = array[i];
        }
    }

    return maxCharacter;
}

int main() {
    char array[] = "aaaaeeeee";
    int array_size = sizeof(array) - 1; // Exclude the null terminator

    char result = mostFrequentCharacter(array, array_size);
    printf("The most frequent character is: '%c'\n", result);

    return 0;
}
