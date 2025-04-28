#include <stdio.h>
#include <math.h>

int main() {

    char grade;
    printf("Enter a letter grade\n");
    scanf("%c", &grade);

    // SWITCH STATEMENT

    switch(grade) {
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("Well played!\n");
            break;
        case 'C':
            printf("Keep up!\n");
            break;
        default:
            printf("No matching grades");
    }

    return 0;
}