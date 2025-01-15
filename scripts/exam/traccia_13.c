/*
    TRACCIA 13
    Sviluppare una function C che, dato come parametro di input una stringa che rappresenta un testo in italiano.
    Determina e restituisce come parametri di output la parola di lunghezza minima contenuta nel testo e la sua lunghezza.
    Le parole sono separate da un unico spazio.
*/

#include <stdio.h>
#include <string.h>

int minLength(char *string, char *minWord) {
    int min = strlen(string);

    char *token = strtok(string, " ");

    while (token != NULL) {
        if (strlen(token) < min) {
            min = strlen(token);
            strcpy(minWord, token);
        }
        token = strtok(NULL, " ");
    }
    return min;
}

int main() {

    char string[] = "Hello everyone the min word will set be";
    char minWord[100];

    int length = minLength(string, minWord);

    printf("The shortest word is: %s\n", minWord);
    printf("Its length is: %d\n", length);

    return 0;
}