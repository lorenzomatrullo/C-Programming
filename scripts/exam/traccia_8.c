/*
    TRACCIA 8
    Sviluppare una function C che, dato come parametro di input un string che rappresenta un testo in italiano.
    Determina e restituisce come parametro di output il numero di parole di tre lettere contenute nel testo.
    Nel testo le parole sono separate da un unico spazio.
*/

#include <stdio.h>
#include <string.h>

int countThreeLetterWords(const char *string) {
    int count = 0;
    int len = strlen(string);
    int wordLength = 0;

    for (int i = 0; i <= len; i++) {
        // If the current character is not a space and not the null terminator, it's part of a word
        if (string[i] != ' ' && string[i] != '\0') {
            wordLength++;
        } else {
            if (wordLength == 3) {
                count++;
            }
            wordLength = 0;
        }
    }
    return count;
}

int main() {
    const char *string = "this is an asd example string with three letter words asd";
    int result = countThreeLetterWords(string);

    printf("The number of three-letter words is: %d\n", result);

    return 0;
}
