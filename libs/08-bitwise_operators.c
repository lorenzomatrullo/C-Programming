#include <stdio.h>

// BITWISE OPERATORS = special operators used in bit level programming (knowing binary is important for this topic)

/*
    & = AND
    | = OR
    ^ = XOR
    << = LEFT SHIFT
    >> = RIGHT SHIFT
*/

int main(){

    int x = 6;   // 6 = 00000110
    int y = 12;  //12 = 00001100
    int z = 0;   // 0 = 00000000

    z = x & y;
    printf("AND = %d\n", z);


    z = x | y;
    printf("OR = %d\n", z);


    z = x ^ y;
    printf("XOR = %d\n", z);


    z = x << 1;
    printf("LEFT SHIFT = %d\n", z);
    // when left shifting the binary number actually doubles


    z = x >> 1;
    printf("RIGHT SHIFT = %d\n", z);
    // when right shifting the binary number actually divides by 2

    return 0;
}