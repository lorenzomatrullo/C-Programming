#include <stdio.h>

/*
    while loop = CHECKS a condition, THEN executes a block of code if condition is true.
    do while loop = always EXECUTES a block of code once, THEN checks a condition.
*/


int main() {

    int number = 0;
    int sum = 0;

    do {
        printf("Enter a # above 0: ");
        scanf("%d", &number);

        if(number > 0) {
            sum += number;
        }
    } while(number > 0);

    printf("Sum: %d", sum);

    return 0;
}