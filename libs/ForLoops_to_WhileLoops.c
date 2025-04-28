#include <stdio.h>

int main() {

    printf("For Loop: ");

    for(int i = 0; i < 5; i++){
        printf("%d ", i);
    }

    printf("\n");

    printf("While Loop: ");

    int j = 0;
    while (j < 5){
        printf("%d ", j);
        j++;
    }

    return 0;
}

