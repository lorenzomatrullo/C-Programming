#include <stdio.h>

/*
    pointer = another sort of variable 
*/

void printAge(int *pAge){
    printf("You are %d years old", *pAge);
}


int main() {
    int age = 19;
    int *pAge = &age;

    /*
    printf("Address of age %p\n", &age);
    printf("Value of pAge %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of age: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored: %d\n", *pAge);
    */

    printAge(pAge);


    return 0;
}