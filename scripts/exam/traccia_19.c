/*
    TRACCIA 19
    Sviluppare una function C che, dati come paramtri di input un array di char e il suo size.
    Determina e restituisce come parametro di ouput il carattere meno frequente.
*/

#include <stdio.h>
#include <string.h>

char find_least_frequent_char(const char *arr, int size) {
    int freq[256] = {0}; // Array per contare la frequenza di ogni carattere

    // Conta la frequenza di ogni carattere
    for (int i = 0; i < size; i++) {
        freq[(unsigned char)arr[i]]++;
    }

    // Trova il carattere meno frequente
    char result = '\0';
    int min_freq = size + 1;

    for (int i = 0; i < size; i++) {
        if (freq[(unsigned char)arr[i]] > 0 && freq[(unsigned char)arr[i]] < min_freq) {
            min_freq = freq[(unsigned char)arr[i]];
            result = arr[i];
        }
    }

    return result;
}

// Funzione principale per testare
int main() {
    char arr[] = "abcabde";
    int size = sizeof(arr) - 1; // Escludi il terminatore null
    char result = find_least_frequent_char(arr, size);
    printf("Il carattere meno frequente è: '%c'\n", result);
    return 0;
}
