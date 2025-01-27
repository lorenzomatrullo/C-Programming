#include <stdio.h>
#include <string.h>

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

// complessità O(n * m)