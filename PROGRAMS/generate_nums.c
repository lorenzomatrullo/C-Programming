#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    for(int i = 0; i < 100; i++){
        int num = rand() % 100 + 1;
        printf("num[%d] = %d\n", i + 1, num);
    }

    return 0;
}