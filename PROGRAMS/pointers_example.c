#include <stdio.h>

int main(){

    int a = 5;
    int b = 10;

    int *p = &b; // p is pointing to b
    // the "and operator" means: "get the memory address of: b"
    printf("MEMORY ADDRESS of b: %p", &b);
    printf("\nMEMORY ADDRESS of *p: %p", &*p);

    printf("\n\n");

    // star operator (*) in printf is used to *dereference* a pointer -> giving as output the value of what its pointing to.
    printf("Value of b: %d", b);
    printf("\nValue of *p: %d", *p);

    return 0;
}