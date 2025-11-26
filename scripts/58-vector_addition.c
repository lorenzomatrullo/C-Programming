#include <stdio.h>

/* vector addition
vector = (X, Y, Z)

v1 = (2, 5, 4)
v2 = (3, 2, 1)
r = v1 + v2 = (5, 7, 5)
*/

void vector_add(float [], float [], float [], int);

int main(){

    float v1[] = {2, 5, 4};
    float v2[] = {3, 2, 1};
    float result[] = {0, 0, 0};

    vector_add(v1, v2, result, 3);

    for(int i = 0; i < 3; i++){
        printf("result[%d] = %.2f\n", i, result[i]);
    }

    return 0;
}

void vector_add(float v1[], float v2[], float result[], int length){

    for(int i = 0; i < length; i++){
        result[i] = v1[i] + v2[i];
    }

}