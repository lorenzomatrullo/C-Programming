#include <stdio.h>
#include <string.h>
#include <ctype.h>


int vowel_count(char *string);


int main(){
    char string1[] = "This is my sentence";
    char string2[] = "Another sentence for me";

    int string1_count = vowel_count(string1);
    int string2_count = vowel_count(string2);

    printf("Vowel Count of String1: %d", string1_count);
    printf("\nVowel Count of String2: %d", string2_count);

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