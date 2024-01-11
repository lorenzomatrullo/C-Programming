#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_WIDTH 7
#define GRID_HEIGHT 6
#define MAX_STEPS 100

#define COLOR_YELLOW "\033[1;33m"
#define COLOR_BLUE "\033[0;34m"
#define COLOR_RESET "\033[0m"
#define LINE_HORIZONTAL "-----"
#define LINE_VERTICAL "|"

const char EMPTY = ' ';
const char PLAYER = 'P';
const char OBSTACLE = 'O';

char board[GRID_WIDTH][GRID_HEIGHT];

void initializeBoard();
void spawnObstacle();
void movePlayer();
void moveObstacle();
int checkCollision();
void printBoard();
void runGame();



int main() {
    srand((unsigned int)time(NULL));

    initializeBoard();

    runGame();

    return 0;
}



void initializeBoard() {
    for (int i = 0; i < GRID_HEIGHT; i++) {
        for (int j = 0; j < GRID_WIDTH; j++) {
            board[i][j] = EMPTY;
        }
    }

    board[GRID_HEIGHT - 1][GRID_WIDTH / 2] = PLAYER;

    int obstacleColumn1 = GRID_WIDTH / 2 - 2;
    int obstacleColumn2 = GRID_WIDTH / 2 + 2;
    board[0][obstacleColumn1] = OBSTACLE;
    board[0][obstacleColumn2] = OBSTACLE;
}



void spawnObstacle() {
    int obstacleColumn = rand() % GRID_WIDTH;
    board[0][obstacleColumn] = OBSTACLE;
}



void movePlayer() {
    int playerRow, playerColumn;

    for (int i = 0; i < GRID_HEIGHT; i++) {
        for (int j = 0; j < GRID_WIDTH; j++) {
            if (board[i][j] == PLAYER) {
                playerRow = i;
                playerColumn = j;
                board[i][j] = EMPTY;
            }
        }
    }

    int direction = rand() % 2;
    playerColumn += (direction == 0 && playerColumn > 0) ? -1 : (direction == 1 && playerColumn < GRID_WIDTH - 1) ? 1 : 0;

    board[GRID_HEIGHT - 1][playerColumn] = PLAYER;
}



void moveObstacle() {
    for (int i = GRID_HEIGHT - 1; i >= 0; i--) {
        for (int j = 0; j < GRID_WIDTH; j++) {
            if (board[i][j] == OBSTACLE) {
                board[i][j] = EMPTY;

                if (i < GRID_HEIGHT - 1) {
                    board[i + 1][j] = OBSTACLE;
                } else {
                    spawnObstacle();
                }
            }
        }
    }
}



int checkCollision() {
    return (board[GRID_HEIGHT - 1][GRID_WIDTH / 2] == OBSTACLE);
}



void printBoard() {
    system("clear || cls");

    printf("%s-", COLOR_BLUE);

    for (int i = 0; i < GRID_WIDTH * 6 - 1; i++) {
        printf("-");
    }

    printf("-%s\n", COLOR_RESET);

    for (int i = 0; i < GRID_HEIGHT; i++) {
        printf("%s|", COLOR_BLUE);

        for (int j = 0; j < GRID_WIDTH; j++) {
            printf("%s  %c  %s|", COLOR_YELLOW, board[i][j], COLOR_BLUE);
        }

        printf("\n");

        if (i < GRID_HEIGHT - 1) {
            printf("%s|", COLOR_BLUE);

            for (int j = 0; j < GRID_WIDTH; j++) {
                printf("%s|", LINE_HORIZONTAL);
            }

            printf("\n");
        }
    }

    printf("%s-", COLOR_BLUE);

    for (int i = 0; i < GRID_WIDTH * 6 - 1; i++) {
        printf("-");
    }

    printf("-%s\n", COLOR_RESET);
}



void runGame() {
    int steps = 0;

    while (steps < MAX_STEPS) {
        printBoard();
        printf("Step %d - Press Enter to continue to the next step...", steps + 1);
        getchar(); // Wait for user input to continue

        movePlayer();
        moveObstacle();

        if (checkCollision()) {
            printf("\nGame Over! The player collided with an obstacle.\n");
            break;
        }

        steps++;
    }

    printf("\nGame Over! Maximum steps reached.\n");
}