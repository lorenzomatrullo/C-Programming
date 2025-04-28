#include <stdio.h>
#include <math.h>

double square(double x) {

    double result = pow(x, 2);
    return result;
}


int main() {

    // return = returns a value back to a calling function

    double x = square(3.14);
    printf("The result is %lf", x);

    return 0;
}