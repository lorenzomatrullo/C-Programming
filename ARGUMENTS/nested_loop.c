#include <stdio.h>

// nested loop = a loop inside of another loop.

int main() {

    int rows;
    int columns;
    char symbol;

    printf("Enter a # of rows: ");
    scanf("%d", &rows);

    printf("Enter a # of columns: ");
    scanf("%d", &columns);

    scanf("%c");

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    

    return 0;
}