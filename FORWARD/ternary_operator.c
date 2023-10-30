#include <stdio.h>
#include <math.h>

// ternary operator = shortcut to if/else statement when assigning/returning a value
// ? = if true
// : = if false


int findMax(int x, int y) {
    return (x > y) ? x : y;
    // if x > y return x, if false return y
}

int main() {
    int max = findMax(5, 4);        // arguments = passing two integers
    printf("%d", max);

    return 0;
}