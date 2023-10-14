#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)\n");
    scanf("%c", &unit);

    unit = toupper(unit); // lowercase letters will be turned into uppercase

    // IF STATEMENT

    if(unit == 'C'){
        printf("Enter the temperature in Celsius\n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Farenheit is: %.1f", temp);
    } else if(unit == 'F'){
        printf("Enter the temperature in F\n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Celsius is: %.1f", temp);
    } else {
        printf("\n%c is not a valid unit of measurement", unit);
        asdasd
    }


    return 0;
}