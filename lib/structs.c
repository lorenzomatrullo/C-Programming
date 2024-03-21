#include <stdio.h>
#include <string.h>

/*
    STRUCT = a structure that group releated variabless, under one name.

    structs caan contain many different data types (string, int, double, bool, etc.)
    variables in a struct are known as "members".
    members can be access with "." = Class Member Access Operator
*/

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
