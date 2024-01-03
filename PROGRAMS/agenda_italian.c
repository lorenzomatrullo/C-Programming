#include <stdio.h>

#define MESI 12
#define GIORNI 30
#define ORE 24
#define CATEGORIE 3

struct Appuntamento {
    int categoria;
};

void aggiungiAppuntamento(struct Appuntamento agenda[MESI][GIORNI][ORE]);
void calcolaOreCategoria(struct Appuntamento agenda[MESI][GIORNI][ORE]);
void descriviStatistiche(struct Appuntamento agenda[MESI][GIORNI][ORE]);
void eseguiOperazioniAgenda(struct Appuntamento agenda[MESI][GIORNI][ORE]);

const char* nomiCategorie[CATEGORIE] = {"Lavoro", "Casa", "Sport"};

int main() {
    struct Appuntamento agenda[MESI][GIORNI][ORE] = {{{0}}};
    eseguiOperazioniAgenda(agenda);
    return 0;
}

void aggiungiAppuntamento(struct Appuntamento agenda[MESI][GIORNI][ORE]) {
    int mese, giorno, ora, categoria;

    printf("Inserisci il mese (1-12): ");
    scanf("%d", &mese);

    printf("Inserisci il giorno (1-30): ");
    scanf("%d", &giorno);

    printf("Inserisci l'ora (0-23): ");
    scanf("%d", &ora);

    printf("Seleziona la categoria (1 = lavoro, 2 = casa, 3 = sport): ");
    scanf("%d", &categoria);

    agenda[mese - 1][giorno - 1][ora].categoria = categoria;
}

void calcolaOreCategoria(struct Appuntamento agenda[MESI][GIORNI][ORE]) {

    int categoria, mese1, giorno1, mese2, giorno2;
    
    printf("Seleziona la categoria (1 = lavoro, 2 = casa, 3 = sport): ");
    scanf("%d", &categoria);

    printf("Inserisci la data di inizio (mese giorno): ");
    scanf("%d %d", &mese1, &giorno1);

    printf("Inserisci la data di fine (mese giorno): ");
    scanf("%d %d", &mese2, &giorno2);

    int oreDedicate = 0;
    int meseInizio = mese1 - 1;
    int giornoInizio = giorno1 - 1;
    int meseFine = mese2 - 1;

    for (int mese = meseInizio; mese < meseFine; mese++) {
        int giornoDiInizio = giornoInizio;
        if (mese != meseInizio) {
            giornoDiInizio = 0;
        }

        int giornoFine = GIORNI;
        if (mese == meseFine) {
            giornoFine = giorno2;
        }

        for (int giorno = giornoDiInizio; giorno < giornoFine; giorno++) {
            for (int ora = 0; ora < ORE; ora++) {
                int categoriaCorrente = agenda[mese][giorno][ora].categoria;
                if (categoriaCorrente == categoria) {
                    oreDedicate++;
                }
            }
        }
    }

    printf("Ore totali dedicate a %s: %d\n", nomiCategorie[categoria - 1], oreDedicate);
}

void descriviStatistiche(struct Appuntamento agenda[MESI][GIORNI][ORE]) {

    int orePerCategoria[CATEGORIE] = {0};

    for (int mese = 0; mese < MESI; mese++) {
        for (int giorno = 0; giorno < GIORNI; giorno++) {
            for (int ora = 0; ora < ORE; ora++) {
                int categoriaCorrente = agenda[mese][giorno][ora].categoria;
                orePerCategoria[categoriaCorrente - 1]++;
            }
        }
    }

    printf("Statistiche delle ore dedicate a ogni categoria:\n");
    printf("%s: %d ore\n", nomiCategorie[0], orePerCategoria[0]);
    printf("%s: %d ore\n", nomiCategorie[1], orePerCategoria[1]);
    printf("%s: %d ore\n", nomiCategorie[2], orePerCategoria[2]);
}

void eseguiOperazioniAgenda(struct Appuntamento agenda[MESI][GIORNI][ORE]) {
    int scelta;
    do {
        printf("\nMenu:\n");
        printf("1. Aggiungi un appuntamento\n");
        printf("2. Mostra le ore dedicate a una categoria in un intervallo di date\n");
        printf("3. Descrivi le statistiche delle ore dedicate a ogni categoria\n");
        printf("4. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                aggiungiAppuntamento(agenda);
                break;
            case 2:
                calcolaOreCategoria(agenda);
                break;
            case 3:
                descriviStatistiche(agenda);
                break;
            case 4:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 4);
}