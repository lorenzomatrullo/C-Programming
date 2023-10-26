#include <stdio.h>

// typedef = reserved keyword that gives an existing datatype a "nickname"


typedef struct {
    char name[25];
    char password[25];
    int id;
}User;

int main(){

    User user1 = {"Bro", "password123", 123456789};
    User user2 = {"Bruh", "password321", 987654321};

    printf("Name: %s\n", user1.name);
    printf("Password: %s\n", user1.password);
    printf("ID: %d\n", user1.id);

    printf("\n");
    
    printf("Name: %s\n", user2.name);
    printf("Password: %s\n", user2.password);
    printf("ID: %d\n", user2.id);

    return 0;
}