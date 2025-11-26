/*
    TRACCIA 10:
    Sviluppare una function C che, data come parametro di input una stringa che rappresenta un testo in italiano.
    Determina e restituisce come parametro di output il numero delle parole che iniziano con "a" e terminano con "e" contenute nel testo.
    Nel testo le parole sono separate da un unico spazio.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countParams(char *string) {
    char *token = strtok(string, " ");

    int count = 0;
    while (token != NULL) {
        if((tolower(token[0]) == 'a') && (tolower(token[strlen(token) - 1]) == 'e')) {
            count++;
        }
        token = strtok(NULL, " ");
    }
    return count;
}

int main(){

    char string[] = "Amiche affettuose ascoltano attente e aiutano sempre";

    // Chiama la funzione countParams e stampa il risultato
    int result = countParams(string);
    printf("Numero di parole che iniziano con 'a' e terminano con 'e': %d\n", result);


    return 0;
}