#include <stdio.h>
#include <string.h>

int string_matching(char key[], char string[]);

int main() {
    char string[] = "Hello world to world";
    char key[] = "world";
    
    printf("\nString: %s\n", string);
    printf("Key string: %s\n", key);
    
    int occurrences = string_matching(key, string);
    
    printf("Number of occurrences of the key string in the text: %d\n", occurrences);
    
    return 0;
}

int string_matching(char key[], char string[]) {
    int key_length = strlen(key);
    int string_length = strlen(string);
    int count_key = 0;
    
    for (int i = 0; i <= string_length - key_length + 1; i++) {
        if (strncmp(key, &string[i], key_length) == 0) {
            count_key++;
        }
    }
    
    return count_key;
}