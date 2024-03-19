#include <stdio.h>

int main(){
    
    // This is a comment
    /*
        This
        is
        a
        multiline
        comment
    */

    /* escape sequence = character combination consisting of a backslash \ followed by a letter or combination of digits.
                         They specify actions within a line of text (string)
                         \n = newline
                         \t = tab 
                         \\ = display \
                         \' = display '
                         \" = display "
    */

    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"I like Pizza\" -Abraham Lincoln probably");

    char full_name[100];
    printf("\nEnter your full name: ");

    // scanf("%s", full_name);                                               // will only display the first word
    // scanf("%[^\n]", full_name);                                           // will display the entire string
    fgets(full_name, sizeof(full_name)/sizeof(full_name[0]), stdin);         // will display the entire string

    printf("You entered: %s\n", full_name);

    return 0;
}