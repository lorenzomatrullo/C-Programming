#include <stdio.h>

/*
    variables      address    values     dereference
    b (int)        55         5          //
    p (pointer)    56         55        *p = 5
    add_one(&b)    55        *p + 1      5 + 1

*/


void add_one(int *);

int main(){

    int b = 5;
    printf("MEMORY ADDRESS of b: %p", &b);
    add_one(&b); // "and operator" to call the memory address of b

    printf("\nValue of b: %d", b);


    return 0;
}

void add_one(int *p){

    // not passing through "and operator" because we wanna get the address of "a pointing to b" and not the address of a;
    printf("\nMEMORY ADDRESS of a: %p", p);

    *p = *p + 1;
}