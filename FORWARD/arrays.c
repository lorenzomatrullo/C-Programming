#include <stdio.h>

// array = a data structure that can store many values of the same data type;

int main(){

    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};

    for(int i = 0; i < 5; i++){
        printf("$%.2lf\n", prices[i]);
    }


    return 0;
}