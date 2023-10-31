#include <stdio.h>

int main() {

    int renameFile;
    char oldname[] = "C:\\Users\\Lorenzo\\Desktop\\text.txt";
    char newname[] = "C:\\Users\\Lorenzo\\Desktop\\lol.txt";

    renameFile = rename(oldname, newname);

    if(renameFile == 0) {
        printf("File renamed successfully.");
    } else {
        printf("Error: file could not be renamed.");
    }

    return 0;
}