#include <stdio.h>

/*
    Recursion is a way of solving a problem where our solution depends on 
    solutions to smaller instances of the same problem

    Practically this means we will write functions that call themselves!

    Example: factorial problem

    The factorial of n denoted by n! is the product of all positive integers <= n 

    n! = n * (n-1) * (n-2) ... * 1

    5! = 5 * 4 * 3 * 2 * 1 = 120
*/

int factorial(int);

int main(){
    
    int n;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // iterative solution to computing factorial
    /*
        while(n <= 1){
            fact = n * fact;
            n--;
        }
    */

   // recursive solution
   fact = factorial(n);

   printf("factorial: %d", fact);

}

int factorial(int n){

    if(n == 1) return 1;

    return n * factorial(n - 1);
}