/*
    TRACCIA 18:
    Sviluppa una function C che, dati come parametri di input un array di char e il suo size.
    Determina e resituisce come parametro di outut il caraterrere meno frequente.
*/

#include <stdio.h>

char leastFrequentCharacter(char *array, int array_size) {
    int minCounter = array_size + 1; // Initialize to a value greater than the possible maximum frequency
    char minCharacter = array[0];

    // Count occurrences of each character
    for (int i = 0; i < array_size; i++) {
        int count = 0;

        for (int j = 0; j < array_size; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        
        // Update the least frequent character if a smaller count is found
        if (count < minCounter) {
            minCounter = count;
            minCharacter = array[i];
        }
    }

    return minCharacter;
}

int main() {
    char array[] = "aaaaeeeeef";
    int array_size = sizeof(array) - 1; // Exclude the null terminator

    char result = leastFrequentCharacter(array, array_size);
    printf("The least frequent character is: '%c'\n", result);

    return 0;
}