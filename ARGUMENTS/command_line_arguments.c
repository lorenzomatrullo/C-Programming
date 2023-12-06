#include <stdio.h>
#include <stdlib.h>

// argc = arguments count
// argv = arguments value
// This allows you to work with inputs directly in cmd

int main(int argc, int *argv[]){

    if(argc != 3){
        printf("Two args required!");
        exit(-1);
    }

    int lower = atoi(argv[1]);
    int higher = atoi(argv[2]);

    for(int i = lower; i <= higher; i++){
        printf("%d\n", i);
    }



    /*
    printf("argc: %d\n", argc);

    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    */

    return 0;
}