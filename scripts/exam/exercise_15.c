/*
    TRACCIA 15
    Sviluppare una function C che, dato come parametro di input un array di char ed il suo size.
    Determina e restituisce come parametro di output l'array (di size 21) del numero delle occurrences delle 21 lettere dell'alphabet_it italiano.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Per la funzione tolower()

// Funzione che conta le occurrences delle lettere dell'alphabet_it
void countOccurrences(const char *string, int *occurrences, const char *alphabet_it) {
    // Inizializza l'array delle occurrences a zero
    for (int i = 0; i < 21; i++) {
        occurrences[i] = 0;
    }

    // Scorre il testo e conta le occorrenze delle lettere
    for (int i = 0; string[i] != '\0'; i++) {
        char c = tolower(string[i]);  // Converte ogni carattere in minuscolo

        // Verifica se il carattere è una lettera dell'alphabet_it italiano
        for (int j = 0; j < 21; j++) {
            if (c == alphabet_it[j]) {
                occurrences[j]++;
                break;  // Esce dal ciclo quando trova una corrispondenza
            }
        }
    }
}

int main() {
    char string[100];
    int occurrences[21];
    char alphabet_it[21] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'z'};

    // Legge l'input da tastiera
    printf("Inserisci il testo: ");
    fgets(string, sizeof(string), stdin);

    // Conta le occorrenze delle lettere italiane nel testo
    countOccurrences(string, occurrences, alphabet_it);

    // Stampa il numero di occorrenze per ciascuna lettera dell'alphabet_it italiano
    printf("Occorrenze delle lettere dell'alfabeto italiano:\n");
    for (int i = 0; i < 21; i++) {
        printf("%c = %d\n", alphabet_it[i], occurrences[i]);
    }

    return 0;
}
