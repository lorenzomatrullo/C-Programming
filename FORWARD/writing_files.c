#include <stdio.h>

/*

    2nd data:
    a = append
    w = write
    r = read

*/


int main(){

    
    FILE *pF = fopen("C:\\Users\\Lorenzo\\Desktop\\text.txt", "a");

    fprintf(pF, "\nPatrick");
    printf("Data has been updated.");

    fclose(pF);


    // RENAMING A FILE

    /*
    int renameFile;
    char oldname[] = "C:\\Users\\Lorenzo\\Desktop\\text.txt";
    char newname[] = "C:\\Users\\Lorenzo\\Desktop\\lol.txt";

    renameFile = rename(oldname, newname);

    if(renameFile == 0) {
        printf("File renamed");
    } else {
        printf("No operation done");
    }
    */
    

    // REMOVING A FILE 

   /*
   if(remove("C:\\Users\\Lorenzo\\Desktop\\text.txt") == 0){
    printf("That file was deleted successfully.");
   } else {
    printf("That file was NOT deleted.");
   }
   */


    return 0;
}