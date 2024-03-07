#include <stdio.h>
#include <math.h>


int main() {

    // DECLARATION & INITIALAZATION

    const double PI = 3.1415926;
    double radius;
    double circumference;
    double area;

    printf("Inserisci il valore del raggio: ", radius);
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("Il valore della circonferenza: %lf", circumference);
    printf("\nIl valore della area: %lf", area);

    return 0;
}