#include <stdio.h>

// Do some code only IF some condition is True
// Else do something else

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", age);

    if (age >= 18) {
        printf("Welcome!");
    } else if (age < 0) {
        printf("You haven't born yet!");
    } else {
        printf("You are not old enough to join!");
    }

    return 0;
}