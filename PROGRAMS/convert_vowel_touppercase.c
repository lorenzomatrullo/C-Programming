#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convert_vowels(char *);

int main(){

    char string[] = "Let's make a string.";

    convert_vowels(string);

    printf("string: %s\n\n", string);

    return 0;
}

void convert_vowels(char *string){
    int length = strlen(string);

    for (int i = 0; i < length; i++){

        if (islower(string[i])){

            switch(string[i]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    string[i] = toupper(string[i]);
                    break;
            }
        }
    }
}