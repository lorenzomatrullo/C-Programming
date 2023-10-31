#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator (+) (-) (*) (/)\n");
    scanf("%c", &operator);

    printf("\nEnter the 1st number: ");
    scanf("%lf", &num1);

    printf("\nEnter the 2nd number: ");
    scanf("%lf", &num2);


    switch(operator){
        case '+':
            result =  num1 + num2;
            printf("\nResult: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult: %.2lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nResult: %.2lf", result);
            break;
        default:
            printf("%c is not valid", operator);
    }


    return 0;
}