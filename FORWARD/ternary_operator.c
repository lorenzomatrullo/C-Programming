#include <stdio.h>
#include <math.h>

// ternary operator = shortcut to if/else statement wwhen assigning/returning a value
// ? = if true
// : = if false


int findMax(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int max = findMax(5, 4);
    printf("%d", max);

    return 0;
}