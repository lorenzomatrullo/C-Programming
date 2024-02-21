#include <stdio.h>
#include <string.h>

// Iterative binary search function to find a word in a sentence
int binary_search_word(char *, char *);

int main() {
    char sentence[] = "This is a sample sentence to demonstrate binary search algorithm";
    char word[] = "sample";


    int position = binary_search_word(sentence, word);
    if (position != -1) {
        printf("The word \"%s\" was found at position %d in the sentence.\n", word, position);
    } else {
        printf("The word \"%s\" is not present in the sentence.\n", word);
    }

    return 0;
}


int binary_search_word(char *sentence, char *word) {
    char *token = strtok(sentence, " ");
    int position = 0;

    while (token != NULL) {
        int comparison = strcmp(token, word);

        if (comparison == 0) {
            return position;
        } else if (comparison > 0) {
            return -1;
        }
        
        token = strtok(NULL, " ");
        position++;
    }

    return -1;
}