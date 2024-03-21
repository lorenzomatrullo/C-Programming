#include <stdio.h>

/*
    ENUMS = a user-defined data type that consists of paired named-integer constants.

    GREAT if you have a set of potential options
*/

enum Day{
    Sun = 1, 
    Mon = 2, 
    Tue = 3, 
    Wed = 4, 
    Thu = 5, 
    Fri = 6, 
    Sat = 7
};


int main(){

    enum Day today = Sun;

    if(today == Sun || today == Sat){
        printf("It's the weekend!");
    } else {
        printf("I have to work today :(");
    }


    return 0;
}
