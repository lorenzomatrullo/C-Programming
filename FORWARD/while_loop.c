#include <stdio.h>
#include <string.h>


// while loop = repeats a section of code possibly unlimited times.


int main(){

    char name[25];

    printf("what is your name?\n", name);
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("You did not enter your name\n");

        printf("what is your name?\n", name);
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    return 0;
}