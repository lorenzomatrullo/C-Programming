#include <stdio.h>

int main(){

    char full_name[100];
    printf("\nEnter your full name: ");

    // scanf("%s", full_name);                                               // will only display the first word
    // scanf("%[^\n]", full_name);                                           // will display the entire string
    fgets(full_name, sizeof(full_name)/sizeof(full_name[0]), stdin);         // will display the entire string

    printf("You entered: %s\n", full_name);

    return 0;
}