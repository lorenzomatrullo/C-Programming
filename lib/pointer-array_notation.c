#include <stdio.h>

/*
    index           address     value
    0               55          1
    1               56          2
    2               57          3

    p (pointer)     58          55
*/

// array notation = you can use pointers to access array slots.

int main(){

    int a[] = {1, 2, 3};
    int *p = a;

    printf("MEMORY ADDRESS of a: %p", a);
    printf("\nMEMORY ADDRESS of p: %p", p);

    printf("\n\n");

    printf("a[2]: %d\n", a[2]);
    printf("p[2]: %d\n", p[2]);

    printf("\n");

    // Pointer notation:

    printf("*(p + 1) = %d\n", *(p + 1));
    // dereference the memory address of the pointer getting the next slot of memory -> value.

    printf("*(p + 2) = %d\n", *(p + 2));
    // dereference the memory address of the pointer shifting over 2 slots and then getting the value.

    printf("*(a + 1) = %d\n", *(a + 1));
    printf("*(a + 2) = %d\n", *(a + 2));
    

    return 0;
}