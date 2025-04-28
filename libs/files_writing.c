#include <stdio.h>

/*

    2nd data:
    a = append
    w = write
    r = read

*/

int main(){

    
    FILE *pF = fopen("C:\\Users\\Lorenzo\\Desktop\\text.txt", "a");

    fprintf(pF, "\nPatrick");
    printf("Data has been updated.");

    fclose(pF);

    return 0;
}