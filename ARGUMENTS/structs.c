#include <stdio.h>
#include <string.h>

// struct = collection of related members ("variable")
//          they can be of different data types listed under one name in a block of memory, VERY SIMILAR to classes in other languages (but no methods).


struct Player{
    char name[12];
    int score;
};

int main(){

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "Bra");
    player2.score = 5;

    printf("Name: %s\n", player1.name);
    printf("Score: %d\n", player1.score);

    printf("Name: %s\n", player2.name);
    printf("Score: %d\n", player2.score);

    return 0;
}