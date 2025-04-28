#include <stdio.h>

/*
    pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
*/

void printAge(int *pAge){
    printf("You are %d years old", *pAge);
}


int main() {
    int age = 19;
    int *pAge = &age;
    // as a convention to declare a pointer we use "p before the actual variable name and the next character will be uppercase"

    
    printf("Address of age %p\n", &age);
    printf("Value of pAge %p\n", pAge);
    printf("Address of pAge %p\n", &pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of age: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored: %d\n", *pAge);

    printAge(pAge);

    return 0;
}