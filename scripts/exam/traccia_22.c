/*
    TRACCIA 22:
    Due giocatori si sfidano lanciando un dado truccato.
    Il dado ha dei valori interi nell'intervallo [5, 15].
    Ad ogni turno vince il giocatore che ottiene un punteggio maggiore.
    In caso di parità il punto viene assegnato ad entrambi.
    Simulare 10 sfide e visualizzare il giocatore che vince più volte.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void giocaPartita() {
    int punteggioGiocatore1 = 0;
    int punteggioGiocatore2 = 0;
    int pareggi = 0;

    for (int i = 0; i < 10; i++) {
        int dado1 = rand() % 11 + 5;
        int dado2 = rand() % 11 + 5;
        
        printf("Sfida %d: Giocatore 1 ha ottenuto %d, Giocatore 2 ha ottenuto %d\n", i + 1, dado1, dado2);

        if (dado1 > dado2) {
            punteggioGiocatore1++;
            printf("Giocatore 1 vince questa sfida!\n");
        } else if (dado2 > dado1) {
            punteggioGiocatore2++;
            printf("Giocatore 2 vince questa sfida!\n");
        } else {
            pareggi++;
            printf("Pareggio!\nEntrambi i giocatori ottengono 1 punto!\n");
        }

        printf("\n");
    }

    printf("Punteggio Finale \n");
    printf("Giocatore 1: %d vittorie\n", punteggioGiocatore1);
    printf("Giocatore 2: %d vittorie\n", punteggioGiocatore2);
    printf("Pareggi: %d\n", pareggi);

    if (punteggioGiocatore1 > punteggioGiocatore2) {
        printf("Giocatore 1 ha vinto piu sfide!\n");
    } else if (punteggioGiocatore2 > punteggioGiocatore1) {
        printf("Giocatore 2 ha vinto piu sfide!\n");
    } else {
        printf("Entrambi i giocatori hanno vinto lo stesso numero di sfide!\n");
    }
}


int main() {

    srand(time(0));
    giocaPartita();

    return 0;
}