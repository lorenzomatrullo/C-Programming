#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

#define LARGHEZZA_GRIGLIA 7
#define ALTEZZA_GRIGLIA 6
#define MASSIMI_PASSI 100

#define COLORE_GIALLO "\033[1;33m"
#define COLORE_BLU "\033[0;34m"
#define COLORE_RESET "\033[0m"
#define LINEA_ORIZZONTALE "-----"
#define LINEA_VERTICALE "|"

const char VUOTO = ' ';
const char GIOCATORE = 'P';
const char OSTACOLO = 'O';

char griglia[LARGHEZZA_GRIGLIA][ALTEZZA_GRIGLIA];

void inizializzaGriglia();
void generaOstacolo();
void muoviGiocatore();
void muoviOstacolo();
int controllaCollisione();
void stampaGriglia();
void eseguiPartita();

int main() {
    srand((unsigned int)time(NULL));

    inizializzaGriglia();

    eseguiPartita();

    return 0;
}

void inizializzaGriglia() {
    for (int i = 0; i < ALTEZZA_GRIGLIA; i++) {
        for (int j = 0; j < LARGHEZZA_GRIGLIA; j++) {
            griglia[i][j] = VUOTO;
        }
    }

    griglia[ALTEZZA_GRIGLIA - 1][LARGHEZZA_GRIGLIA / 2] = GIOCATORE;

    int colonnaOstacolo1 = LARGHEZZA_GRIGLIA / 2 - 2;
    int colonnaOstacolo2 = LARGHEZZA_GRIGLIA / 2 + 2;

    if (colonnaOstacolo1 >= 0 && colonnaOstacolo1 < LARGHEZZA_GRIGLIA)
        griglia[0][colonnaOstacolo1] = OSTACOLO;

    if (colonnaOstacolo2 >= 0 && colonnaOstacolo2 < LARGHEZZA_GRIGLIA)
        griglia[0][colonnaOstacolo2] = OSTACOLO;
}

void generaOstacolo() {
    int colonnaOstacolo = rand() % LARGHEZZA_GRIGLIA;

    if (colonnaOstacolo >= 0 && colonnaOstacolo < LARGHEZZA_GRIGLIA)
        griglia[0][colonnaOstacolo] = OSTACOLO;
}

void muoviGiocatore() {
    int rigaGiocatore, colonnaGiocatore;

    for (int i = 0; i < ALTEZZA_GRIGLIA; i++) {
        for (int j = 0; j < LARGHEZZA_GRIGLIA; j++) {
            if (griglia[i][j] == GIOCATORE) {
                rigaGiocatore = i;
                colonnaGiocatore = j;
                griglia[i][j] = VUOTO;
            }
        }
    }

    int direzione = rand() % 2;
    if (direzione == 0 && colonnaGiocatore > 0) {
        colonnaGiocatore--;
    } else if (direzione == 1 && colonnaGiocatore < LARGHEZZA_GRIGLIA - 1) {
        colonnaGiocatore++;
    }

    if (rigaGiocatore < ALTEZZA_GRIGLIA && colonnaGiocatore < LARGHEZZA_GRIGLIA)
        griglia[ALTEZZA_GRIGLIA - 1][colonnaGiocatore] = GIOCATORE;
}

void muoviOstacolo() {
    for (int i = ALTEZZA_GRIGLIA - 1; i >= 0; i--) {
        for (int j = 0; j < LARGHEZZA_GRIGLIA; j++) {
            if (griglia[i][j] == OSTACOLO) {
                griglia[i][j] = VUOTO;

                if (i < ALTEZZA_GRIGLIA - 1) {
                    if (j >= 0 && j < LARGHEZZA_GRIGLIA)
                        griglia[i + 1][j] = OSTACOLO;
                } else {
                    generaOstacolo();
                }
            }
        }
    }
}

int controllaCollisione() {
    if (ALTEZZA_GRIGLIA > 0 && LARGHEZZA_GRIGLIA / 2 >= 0 && LARGHEZZA_GRIGLIA / 2 < LARGHEZZA_GRIGLIA)
        return (griglia[ALTEZZA_GRIGLIA - 1][LARGHEZZA_GRIGLIA / 2] == OSTACOLO);
    return 0;
}

void stampaGriglia() {
    system(CLEAR_SCREEN);

    printf("%s-", COLORE_BLU);

    for (int i = 0; i < LARGHEZZA_GRIGLIA * 6 - 1; i++) {
        printf("-");
    }

    printf("-%s\n", COLORE_RESET);

    for (int i = 0; i < ALTEZZA_GRIGLIA; i++) {
        printf("%s|", COLORE_BLU);

        for (int j = 0; j < LARGHEZZA_GRIGLIA; j++) {
            if (i < ALTEZZA_GRIGLIA && j < LARGHEZZA_GRIGLIA)
                printf("%s  %c  %s|", COLORE_GIALLO, griglia[i][j], COLORE_BLU);
        }

        printf("\n");

        if (i < ALTEZZA_GRIGLIA - 1) {
            printf("%s|", COLORE_BLU);

            for (int j = 0; j < LARGHEZZA_GRIGLIA; j++) {
                printf("%s|", LINEA_ORIZZONTALE);
            }

            printf("\n");
        }
    }

    printf("%s-", COLORE_BLU);

    for (int i = 0; i < LARGHEZZA_GRIGLIA * 6 - 1; i++) {
        printf("-");
    }

    printf("-%s\n", COLORE_RESET);
}

void eseguiPartita() {
    int passi = 0;

    while (passi < MASSIMI_PASSI) {
        stampaGriglia();
        printf("Passo %d - Premi Invio per continuare al prossimo passo...", passi + 1);
        getchar(); // Aspetta l'input dell'utente per continuare

        muoviGiocatore();
        muoviOstacolo();

        if (controllaCollisione()) {
            printf("\nGame Over! Il giocatore ha colliso con un ostacolo.\n");
            break;
        }

        passi++;
    }

    printf("\nGame Over! Massimi passi raggiunti.\n");
}