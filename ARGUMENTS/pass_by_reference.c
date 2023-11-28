#include <stdio.h>

void add_one(int *a);

int main(){

    int b = 5;
    printf("MEMORY ADDRESS of b: %p", &b);
    add_one(&b); // "and operator" to call the memory address of b

    printf("\nValue of b: %d", b);


    return 0;
}

void add_one(int *a){

    // not passing through "and operator" because we wanna get the address of "a pointing to b" and not the address of a;
    printf("\nMEMORY ADDRESS of a: %p", a); 

    *a = *a + 1;
}