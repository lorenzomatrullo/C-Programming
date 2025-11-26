/*
    TRACCIA 12
    Sviluppare una function C che, dato come parametro di input una stringa che rappresenta un testo in italiano.
    Determina e restituisce come parametri di oupput la parole di lunghezza massima contenuta nel testo e la sua lunghezza.
    Nel testo le parole sono separate da un unico spazio.
*/

#include <stdio.h>
#include <string.h>

int maxLength(char *string, char *maxWord) {
    int max = 0;

    char *token = strtok(string, " ");

    while (token != NULL) {
        if (strlen(token) > max) {
            max = strlen(token);
            strcpy(maxWord, token);
        }
        token = strtok(NULL, " ");
    }
    return max;
}


int main() {

    char string[] = "Hello everyone the max word is gonna be aesthetically";
    char maxWord[100];

    int length = maxLength(string, maxWord);

    printf("THe longest word is: %s\n", maxWord);
    printf("Its length is: %d\n", length);


    return 0;
}