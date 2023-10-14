#include <stdio.h>
#include <math.h>

void function(char x[], double y) {
    printf("Hello %s, you are %.0lf yo", x, y);
}

int main() {

    char name[] = "Lorenzo";
    double age = 19;

    function(name, age);

    return 0;
}