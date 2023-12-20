#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_SIZE 4096

int word_count(char *, char *);

int main(){
    char s1[MAX_SIZE];
    char w1[100];

    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the word to find: ");
    scanf("%s", &w1);


    int result1 = word_count(s1, w1);
    printf("Result 1: %d\n", result1);

    return 0;
}

int word_count(char *string, char *word){
    int string_length = strlen(string);
    int word_length = strlen(word);

    int end = string_length - word_length + 1;

    int count = 0;

    for (int i = 0; i < end; i++){
        bool word_found = true;

        int j = 0;
        
        while(j < word_length){

            // avoiding lower or upper cases
            if(tolower(word[j]) != tolower(string[i + j])){
                word_found = false;
                break;
            }

            j++;
        }
        if (word_found) count++;
    }

    return count;
}
