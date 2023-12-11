#include <stdio.h>

// EOF = End of file (constant)

int main(){

    FILE *pF = fopen(__FILE__, "r");
    char c;

    while((c = getc(pF)) != EOF){
        putchar(c);
    }


    fclose(pF);

    return 0;
}