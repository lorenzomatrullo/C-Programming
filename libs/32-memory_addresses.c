#include <stdio.h>

/*
    memory = an array of bytes within RAM
    memory block = a single unit of byte within MEMORY, used to hold some value
    memory address = the address of where a MEMORY BLOCK is located
    It can be accessed with & (address-of operator)
    Memory addresses are likely to change everytime we run the program
*/

// HEXADECIMAL: 0-9 + A-F
// (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F)
// total of 16 different values for each digit


int main(){

    //char a = 'X';
    //short b = 'Y';
    //int c = 'Z';

    char a;
    char b[100];

    // how many bytes values store
    printf("%d bytes\n", sizeof(a)); 
    printf("%d bytes\n", sizeof(b));
    //printf("%d bytes\n", sizeof(c));

    // memory address of each value
    printf("%p\n", &a);
    printf("%p\n", &b);
    //printf("%p\n", &c);

    return 0;
}
