/*
    TRACCIA 9
    Sviluppare una function C che, dato come parametror di input una stringa che rappresenta un testo in italiano.
    Determina e restituisce come parametro di output il numero di paraole che terminano in are contenute nel testo.
*/

#include <stdio.h>
#include <string.h>

int contareAre(char *string) {
    char *token = strtok(string, " ");

    int count = 0;
    while (token != NULL) {
        if (strlen(token) >= 3) {
            if (!strcmp(&token[strlen(token) - 3], "are")) {
                count++;
            }
        }
        token = strtok(NULL, " ");
    }
    return count;
}

int main(){

    char string[] = "Andiamo a fare una camminata per contare i passi";

    int result = contareAre(string);
    printf("\"are\" compare: %d volte", result);

    return 0;
}