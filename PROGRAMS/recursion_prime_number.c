#include <stdio.h>
#include <stdbool.h>

/*
    Prime numbers are natural numbers greater than 1 divisibe only by 1 and the number itself.

    A number is divisible by another if the remainder after division is zero.

    5 is a prime number:

    5 / 2 = 2 remainder 1
    5 / 3 = 2 remainder 2
    5 / 4 = 2 remainder 1

    6 is not a prime number:

    6 / 2 = 3 remainder 0
    6 / 3 = 2 remainder 0
    // if these 2 ups are verified you dont need to go forward.
    6 / 4 = 1 remainder 2
    6 / 5 = 1 remainder 1

    n / i = result
*/

bool primeChecker(int, int);

int main(){
    
    int number;
    printf("Choose a number: ");
    scanf("%d", &number);

    int dividedBy;
    printf("Choose a number to divide it by: ");
    scanf("%d", &dividedBy);


    if (primeChecker(number, dividedBy)) {
        printf("\n%d is prime\n", number);
    } else {
        printf("\n%d is NOT prime", number);
    }

    return 0;
}

bool primeChecker(int n, int i){

    if (n <= 1) return false;
    else if (n == 2) return true;
    else if (n % i == 0) return false;
    else if (i >= n / 2) return true;
    else return primeChecker(n, i + 1);

}