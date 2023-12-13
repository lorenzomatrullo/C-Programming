#include <stdio.h>

int sum(int);

int main(){

    printf("%d\n", sum(5));

    return 0;
}

int sum(int n){
    
    if(n > 0){
        return n + sum(n - 1);
    } else {
        return 0;
    }
}