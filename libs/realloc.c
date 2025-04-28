#include <stdio.h>
#include <stdlib.h>

int main(){

    int *numbers;
    int size = 2; 
    numbers = malloc(sizeof(int) * size);
    int input = 0, count = 0; 

    do{
        if(count == size){
            size += 2;
            numbers = realloc(numbers, sizeof(int) * size);
        }

        printf("Enter (-1 to quit): ");
        scanf("%d", &input);

        if(input != -1){
            numbers[count] = input;
            count++;
        }

    } while (input != -1);

    int num_elements = count;
    int total = 0;

    for(int i = 0; i < num_elements; i++){
        total += numbers[i];

        printf("average: %d\n", total / num_elements);
    }


    free(numbers);


    return 0;
}