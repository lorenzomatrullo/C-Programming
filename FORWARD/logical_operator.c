#include <stdio.h>
#include <stdbool.h>

int main(){

    /*
    LOGICAL OPERATORS: 
    &&(AND) = checks if 2 conditions are true
    ||(OR) = checks if the last condition is true
    !(NOT) = reverses th state of a condition
    */

    float temp;

    printf("Enter a temp value: ");
    scanf("%f", &temp);

    if(temp >= 0 && temp <= 30){
        printf("The weather is good");
    } else {
        printf("\nTHe weather is bad");
    }



    return 0;
}