#include <stdio.h>

int occurrences(int array[], int length, int to_find);

int main(){
    int array1[] = {4, 9, 7, 6, 5, 8, 3, 2, 1, 5, 0, 0, 0, 0};
    int array1_length = sizeof(array1)/sizeof(array1[0]);

    int to_find;
    printf("Which number do you wanna find the occurrences?: ");
    scanf("%d", &to_find);

    int find_array1 = occurrences(array1, array1_length, to_find);

    printf("\n# of value found in array1: %d", find_array1);

    return 0;
}


// returns the number of times to_find occurs in the array with the given length
int occurrences(int array[], int length, int to_find){

    // start count at 0
    int count = 0;

    // check each array element, increment count whenever a match is found
    for(int i = 0; i < length; i++){
        if(array[i] == to_find){
            count++;
        }
    }
    
    return count;
}