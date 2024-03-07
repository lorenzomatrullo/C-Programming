#include <stdio.h>

/*
    continue = skips rest of code & forces the next interation of the loop
    break = exits a loop/switch
*/


int main() {
    for(int i = 1; i <= 20; i++) {
        if(i == 13) {
            continue; // skips 13 from the output
        }

        printf("%d\n", i);
    }

    return 0;
}