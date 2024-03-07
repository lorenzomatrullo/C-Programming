#include <stdio.h>

double average(double[], int);

int main(){

    double array1[] = {5.2, 4, 3, 2.1, 1.2};
    int array1_size = sizeof(array1)/sizeof(array1[0]);

    double array1_average = average(array1, array1_size);

    printf("Array1's average: %.2lf", array1_average);

    return 0;
}

double average(double array[], int length){
    double sum = 0;

    for(int i = 0; i < length; i++){
        sum = sum + array[i];
    }
    return sum / length;
}