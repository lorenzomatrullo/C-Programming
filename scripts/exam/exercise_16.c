/*
    TRACCIA 16
    Scrivere una funzione in linguaggio C che, dati come parametri di input:
    - un array di caratteri (contenente un testo),
    - la dimensione dell'array (size),

    Calcoli e restituisca, tramite un parametro di output, un array chiamato `occorrenze` (di dimensione 21).
    Questo array deve contenere il numero di volte in cui la lettera 'a' è seguita da ognuna delle 21 lettere dell'alfabeto italiano (ossia 'a', 'b', 'c', ..., 'u'), senza considerare le lettere `j`, `k`, `w`, `x`, `y`.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_IT 21 // Number of letters in the Italian ALPHABET_IT

void calculateOccurrences(const char *string, int size, int *occurrences) {
    // Initialize the occurrences array to 0
    for (int i = 0; i < ALPHABET_IT; i++) {
        occurrences[i] = 0;
    }

    // Iterate over the input array
    for (int i = 0; i < size - 1; i++) {
        // Convert characters to lowercase to handle case-insensitivity
        char c1 = tolower(string[i]);
        char c2 = tolower(string[i + 1]);

        // Check if the first character is 'a' and the second is a letter between 'a' and 'u'
        if (c1 == 'a' && c2 >= 'a' && c2 <= 'u') {
            // Calculate the index for the occurrences array
            int index = c2 - 'a';
            occurrences[index]++;
        }
    }
}

int main() {
    const char string[] = "abacabadabacaba";
    int size = strlen(string);

    int occurrences[ALPHABET_IT];

    calculateOccurrences(string, size, occurrences);

    // Print the result
    printf("Occurrences of letters following 'a':\n");
    for (int i = 0; i < ALPHABET_IT; i++) {
        printf("a%c: %d\n", 'a' + i, occurrences[i]);
    }

    return 0;
}
