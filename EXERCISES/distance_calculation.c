#include <stdio.h>
#include <math.h>


float operazione(float x, float y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

float sottrazione(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}


int main() {
    // DECLARATION 

    float x1, y1, distanza1;
    float x2, y2, distanza2;
    float distanza12;
    float valore;

    printf("Inserisci coordinate: ", x1, y1);
    scanf("%f %f", &x1, &y1);

    distanza1 = operazione(x1, y1);
    printf("Calcolo distanza1: %f", distanza1);

    printf("\nInserisci coordinate: ", x2, y2);
    scanf("%f %f", &x2, &y2);

    distanza2 = operazione(x2, y2);
    printf("\nCalcolo distanza2: %f", distanza2);

    distanza12 = sottrazione(x1, y1, x2, y2);
    printf("\nCalcolo distanza12: %f", distanza12);

    if(distanza12 >= 15) {
        printf("\nRichiedi un altro valore di associazione: ");
        scanf("%f", &valore);
    } else if(distanza12 < 15) {
        printf("\nYou're good!");
    }

    return 0;
}