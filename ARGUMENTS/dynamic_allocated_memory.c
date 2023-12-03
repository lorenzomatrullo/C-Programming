#include <stdio.h>
#include <stdlib.h>

/* stack
    variables       address     value
    a               12          5
    b               13          6
    ..              14
    ..              15
    ..              16
    ..              17
    ..              18
    ..              ..

    heap
*/

// We use DYNAMIC ALLOCATED MEMORY when we gotta have another slot of memory between 2 other slots.
// stdlib.h = malloc, calloc, realloc, free

int main(){

    int *a = malloc();

    return 0;
}