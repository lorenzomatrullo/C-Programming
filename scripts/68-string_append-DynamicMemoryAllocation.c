#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *string1, char *string2);

int main(){

    char string1[] = "First";
    char string2[] = "Second";

    char *string = string_append(string1, string2);

    printf("string: %s\n", string);
    free(string);

    return 0;
}

char *string_append(char *string1, char *string2){
    int string1_length = strlen(string1);
    int string2_length = strlen(string2);
    int size = string1_length + string2_length + 1;

    char *string = calloc(size, sizeof(char));

    for(int i = 0; i < string1_length; i++){
        string[i] = string1[i];
    }

    for(int i = 0; i < string2_length; i++){
        string[string1_length + i] = string2[i];
    }
    string[size - 1] = '\0';

    return string;
}