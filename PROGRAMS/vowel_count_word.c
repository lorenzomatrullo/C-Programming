#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *);

int main(){
    char string1[] = "This is a sentence";

    int vowel_string = vowel_count(string1);
    printf("In the sentence \"%s\" there is %d vowels", string1, vowel_string);

    char *token = strtok(string1, " ");

    while(token != NULL){
        int vowel_word = vowel_count(token);
        printf("\nVowel count in \"%s\": %d", token, vowel_word);
        token = strtok(NULL, " ");
    }

    return 0;
}

int vowel_count(char *string){
    int count = 0;

    for(int i = 0; i < strlen(string); i++){
        switch(toupper(string[i])){
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