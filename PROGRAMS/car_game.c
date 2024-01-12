#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

#define GRID_WIDTH 7
#define GRID_HEIGHT 6
#define MAX_STEPS 100

#define YELLOW_COLOR "\033[1;33m"
#define BLUE_COLOR "\033[0;34m"
#define RESET_COLOR "\033[0m"
#define HORIZONTAL_LINE "-----"
#define VERTICAL_LINE "|"

const char EMPTY = ' ';
const char PLAYER = 'P';
const char OBSTACLE = 'O';

char board[GRID_WIDTH][GRID_HEIGHT];

void initializeGrid();
void generateObstacle();
void movePlayer();
void moveObstacle();
int checkCollision();
void printGrid();
void runGame();

int main() {
    srand((unsigned int)time(NULL));

    initializeGrid();

    runGame();

    return 0;
}

void initializeGrid() {
    for (int i = 0; i < GRID_HEIGHT; i++) {
        for (int j = 0; j < GRID_WIDTH; j++) {
            board[i][j] = EMPTY;
        }
    }

    board[GRID_HEIGHT - 1][GRID_WIDTH / 2] = PLAYER;

    int obstacleColumn1 = GRID_WIDTH / 2 - 2;
    int obstacleColumn2 = GRID_WIDTH / 2 + 2;

    if (obstacleColumn1 >= 0 && obstacleColumn1 < GRID_WIDTH)
        board[0][obstacleColumn1] = OBSTACLE;

    if (obstacleColumn2 >= 0 && obstacleColumn2 < GRID_WIDTH)
        board[0][obstacleColumn2] = OBSTACLE;
}

void generateObstacle() {
    int obstacleColumn = rand() % GRID_WIDTH;

    if (obstacleColumn >= 0 && obstacleColumn < GRID_WIDTH)
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
    if (direction == 0 && playerColumn > 0) {
        playerColumn--;
    } else if (direction == 1 && playerColumn < GRID_WIDTH - 1) {
        playerColumn++;
    }

    if (playerRow < GRID_HEIGHT && playerColumn < GRID_WIDTH)
        board[GRID_HEIGHT - 1][playerColumn] = PLAYER;
}

void moveObstacle() {
    for (int i = GRID_HEIGHT - 1; i >= 0; i--) {
        for (int j = 0; j < GRID_WIDTH; j++) {
            if (board[i][j] == OBSTACLE) {
                board[i][j] = EMPTY;

                if (i < GRID_HEIGHT - 1) {
                    if (j >= 0 && j < GRID_WIDTH)
                        board[i + 1][j] = OBSTACLE;
                } else {
                    generateObstacle();
                }
            }
        }
    }
}

int checkCollision() {
    if (GRID_HEIGHT > 0 && GRID_WIDTH / 2 >= 0 && GRID_WIDTH / 2 < GRID_WIDTH)
        return (board[GRID_HEIGHT - 1][GRID_WIDTH / 2] == OBSTACLE);
    return 0;
}

void printGrid() {
    system(CLEAR_SCREEN);

    printf("%s-", BLUE_COLOR);

    for (int i = 0; i < GRID_WIDTH * 6 - 1; i++) {
        printf("-");
    }

    printf("-%s\n", RESET_COLOR);

    for (int i = 0; i < GRID_HEIGHT; i++) {
        printf("%s|", BLUE_COLOR);

        for (int j = 0; j < GRID_WIDTH; j++) {
            if (i < GRID_HEIGHT && j < GRID_WIDTH)
                printf("%s  %c  %s|", YELLOW_COLOR, board[i][j], BLUE_COLOR);
        }

        printf("\n");

        if (i < GRID_HEIGHT - 1) {
            printf("%s|", BLUE_COLOR);

            for (int j = 0; j < GRID_WIDTH; j++) {
                printf("%s|", HORIZONTAL_LINE);
            }

            printf("\n");
        }
    }

    printf("%s-", BLUE_COLOR);

    for (int i = 0; i < GRID_WIDTH * 6 - 1; i++) {
        printf("-");
    }

    printf("-%s\n", RESET_COLOR);
}

void runGame() {
    int steps = 0;

    while (steps < MAX_STEPS) {
        printGrid();
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