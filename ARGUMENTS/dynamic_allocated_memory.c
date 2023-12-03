#include <stdio.h>
#include <stdlib.h>

/* stack
    variables       address     value
    a               12          5
    b               13          6
    ..              14
    ..              15
    ..              ..
    ..              ..
    ..              ..
    ..              ..
    a[0]            16          1
    a[1]            17          5
    a[2]            18          9
    ..              19
    heap
*/

// We use DYNAMIC ALLOCATED MEMORY when we gotta have another slot of memory between 2 other slots.
// stdlib.h = malloc, calloc, realloc, free

int main(){

    int *a = malloc(sizeof(int) * 5); // we use *malloc* to store blocks of memory (malloc stands for "memory allocation")
    int *a = calloc(5, sizeof(int)); // we use *calloc* to clear blocks of memory (calloc stands for "clean allocations")

    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;

    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    free(a); // *free* takes the block of memory and makes it available again.

    return 0;
}