#include <stdio.h>


int main(){

    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};

    /*
    printf("%.1lf\n", prices[0]);
    printf("%.1lf\n", prices[1]);
    printf("%.1lf\n", prices[2]);
    printf("%.1lf\n", prices[3]);
    printf("%.1lf", prices[4]);
    */
   
   int i;

   for(i = 0; i < 5; i++){
    printf("%.1lf\n", prices[i]);
   }


    return 0;
}