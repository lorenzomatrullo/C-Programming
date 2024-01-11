#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LARGHEZZA_GRIGLIA 7
#define ALTEZZA_GRIGLIA 6
#define MASSIMO_PASSI 100

#define COLORE_GIALLO "\033[1;33m"
#define COLORE_BLU "\033[0;34m"
#define COLORE_RESET "\033[0m"
#define LINEA_ORIZZONTALE "-----"
#define LINEA_VERTICALE "|"

const char VUOTO = ' ';
const char GIOCATORE = 'P';
const char OSTACOLO = 'O';

char griglia[LARGHEZZA_GRIGLIA][ALTEZZA_GRIGLIA];


void inizializzaGriglia() {
    for (int i = 0; i < ALTEZZA_GRIGLIA; i++) {
        for (int j = 0; j < LARGHEZZA_GRIGLIA; j++) {
            griglia[i][j] = VUOTO;
        }
    }

    // Posiziona il giocatore nell'ultima riga e al centro
    griglia[ALTEZZA_GRIGLIA - 1][LARGHEZZA_GRIGLIA / 2] = GIOCATORE;

    // Posiziona due ostacoli simmetricamente nella prima riga
    int colonnaOstacolo1 = LARGHEZZA_GRIGLIA / 2 - 2;
    int colonnaOstacolo2 = LARGHEZZA_GRIGLIA / 2 + 2;
    griglia[0][colonnaOstacolo1] = OSTACOLO;
    griglia[0][colonnaOstacolo2] = OSTACOLO;
}



void spawnOstacolo() {
    int colonnaOstacolo = rand() % LARGHEZZA_GRIGLIA;
    griglia[0][colonnaOstacolo] = OSTACOLO;
}



void muoviGiocatore() {
    // Trova la posizione corrente del giocatore
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

    // Muovi il giocatore a sinistra o a destra casualmente
    int direzione = rand() % 2; // 0 per sinistra, 1 per destra
    colonnaGiocatore += (direzione == 0 && colonnaGiocatore > 0) ? -1 : (direzione == 1 && colonnaGiocatore < LARGHEZZA_GRIGLIA - 1) ? 1 : 0;

    // Muovi il giocatore alla nuova posizione
    griglia[ALTEZZA_GRIGLIA - 1][colonnaGiocatore] = GIOCATORE;
}



void muoviOstacolo() {
    // Muovi gli ostacoli verso il basso
    for (int i = ALTEZZA_GRIGLIA - 1; i >= 0; i--) {
        for (int j = 0; j < LARGHEZZA_GRIGLIA; j++) {
            if (griglia[i][j] == OSTACOLO) {
                griglia[i][j] = VUOTO;

                // Respawn alla prima riga se raggiunge il fondo
                if (i < ALTEZZA_GRIGLIA - 1) {
                    griglia[i + 1][j] = OSTACOLO;
                } else {
                    spawnOstacolo();
                }
            }
        }
    }
}



int verificaCollisione() {
    // Verifica se il giocatore ha colliso con un ostacolo
    return (griglia[ALTEZZA_GRIGLIA - 1][LARGHEZZA_GRIGLIA / 2] == OSTACOLO);
}



void stampaGriglia() {
    system("clear || cls");

    printf("%s-", COLORE_BLU);

    for (int i = 0; i < LARGHEZZA_GRIGLIA * 6 - 1; i++) {
        printf("-");
    }

    printf("-%s\n", COLORE_RESET);

    for (int i = 0; i < ALTEZZA_GRIGLIA; i++) {
        printf("%s|", COLORE_BLU);

        for (int j = 0; j < LARGHEZZA_GRIGLIA; j++) {
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



int main() {
    srand((unsigned int)time(NULL));

    inizializzaGriglia();

    int passi = 0;

    while (passi < MASSIMO_PASSI) {
        stampaGriglia();
        printf("Passo %d - Premi Invio per continuare al passo successivo...", passi + 1);
        getchar(); // Attendi l'input dell'utente per continuare

        muoviGiocatore();
        muoviOstacolo();

        if (verificaCollisione()) {
            printf("\nGame Over! Il giocatore ha colliso con un ostacolo.\n");
            break;
        }

        passi++;
    }

    printf("\nGame Over! Massimo numero di passi raggiunto.\n");

    return 0;
}
