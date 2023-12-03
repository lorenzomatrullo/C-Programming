#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *word);

int main(){
    char string1[] = "This is my sentence";

    char *token = strtok(string1, " ");
    while (token != NULL) {
        int word_count = vowel_count(token);
        printf("Vowel Count in '%s': %d\n", token, word_count);
        token = strtok(NULL, " ");
    }

    return 0;
}

int vowel_count(char *word){
    int count = 0;

    for(int i = 0; i < strlen(word); i++){
        switch(toupper(word[i])){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }
    return count;
}
// https://chat.openai.com/c/933027e8-571e-43f9-a4fe-b8fc42f7c98e