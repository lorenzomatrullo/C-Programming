/*
    TRACCIA 14
    Sviluppare una function C che, dato come parametro di input una stringa che rappresenta un testo in italiano.
    Determina e restituisce come parametro di output la lunghezza minima contenuta nel testo e la possizione di inizio della parola.
    Nel testo le parole sono separate da un unico spazio.
*/

#include <stdio.h>
#include <string.h>

int minLength(char *string, char *minWord, int *minPosition) {
    int min = strlen(string);

    char *token = strtok(string, " ");
    *minPosition = 0;
    int currentPosition = 0;

    while (token != NULL) {
        if (strlen(token) < min) {
            min = strlen(token);
            strcpy(minWord, token);
            *minPosition = currentPosition;
        }
        currentPosition += strlen(token) + 1;
        token = strtok(NULL, " ");
    }
    return min;
}

int main() {

    char string[] = "This is an example sentence with words";
    char minWord[100];
    int minPosition;

    int length = minLength(string, minWord, &minPosition);


    printf("The shortest word is: '%s'\n", minWord);
    printf("Its length is: %d\n", length);
    printf("Its starting letter position in the string is: %d\n", minPosition);


    return 0;
}