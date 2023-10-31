#include <stdio.h>

void hello(char[], int); // function prototype, allows you to type the function after the main one.



int main() {
    char name[] = "Lorenzo";
    int age = 19;

    hello(name, age);

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s", name);
    printf("\nYou are %d yo", age);
}