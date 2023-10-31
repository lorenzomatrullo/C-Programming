#include <stdio.h>


int main() {

    if(remove("C:\\Users\\Lorenzo\\Desktop\\text.txt") == 0) {
        printf("File was deleted successfully.");
    } else {
        printf("Error: file was not deleted.");
    }
    

    return 0;
}