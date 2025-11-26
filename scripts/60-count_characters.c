#include <stdio.h>
#include <string.h>

// NOT COUNTING BLANK SPACES

int NoSpaces(char *);

int main(){

    char string[] = "Hello World!";
    int length = NoSpaces(string);

    printf("STRING LENGTH: %d", length);

    return 0;
}

int NoSpaces(char *string){
    int count = 0;

    while (*string != '\0'){
        if (*string != ' '){
            count++;
        }
        string++;
    }
    return count;
}