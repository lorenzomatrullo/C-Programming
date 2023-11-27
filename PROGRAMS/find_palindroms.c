#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char[]);

int main(){

    char string1[] = "abcdcba";
    char string2[] = "not a palindrome";

    if(is_palindrome(string1)){
        printf("%s\n- is a palindrome", string1);
    } else {
        printf("%s\n- is not a palindrome", string1);
    }

    printf("\n\n");

    if(is_palindrome(string2)){
        printf("%s\n- is a palindrome", string2);
    } else {
        printf("%s\n- is not a palindrome", string2);
    }

    return 0;
}

bool is_palindrome(char string[]){

    int middle = strlen(string) / 2;
    int length = strlen(string);

    for(int i = 0; i < middle; i++){
        if(string[i] != string[length - i - 1]){
            return false;
        }
    }
    return true;
}