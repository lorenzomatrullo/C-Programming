/*
    TRACCIA 20:
    Dato una lista di persone partecipanti a un concorso, ordinare l'elenco in ordine alfabetico in bae al cognome.
    La struttura che identifica il partecipante e:
    struct Persona {
        char *nome;
        char *cognome;
    };

    typedef struct Persona id;

    struct Partecipante {
        id *utente;
        unsigned short codice;
    };
*/


#include <stdio.h>
#include <string.h>

struct Persona {
    char *nome;
    char *cognome;
};

typedef struct Persona id;

struct Partecipante {
    id *utente;
    unsigned short codice;
};

typedef struct Partecipante ElencoPartecipanti;

void ordina_partecipanti(ElencoPartecipanti *partecipanti, int numero_partecipanti) {
    for (int i = 1; i < numero_partecipanti; i++) {
        ElencoPartecipanti key = partecipanti[i];
        int j = i - 1;

        // Sposta gli elementi maggiori del key
        while (j >= 0 && strcmp(partecipanti[j].utente->cognome, key.utente->cognome) > 0) {
            partecipanti[j + 1] = partecipanti[j];
            j--;
        }

        // Inserisce il key nella posizione corretta
        partecipanti[j + 1] = key;
    }
}

int main() {
    id persona1 = {"Mario", "Rossi"};
    id persona2 = {"Luca", "Bianchi"};
    id persona3 = {"Anna", "Verdi"};

    ElencoPartecipanti partecipanti[] = {
        {&persona1, 101},
        {&persona2, 102},
        {&persona3, 103}
    };

    int numero_partecipanti = sizeof(partecipanti) / sizeof(partecipanti[0]);

    // Ordinamento
    ordina_partecipanti(partecipanti, numero_partecipanti);

    // Stampa risultato
    for (int i = 0; i < numero_partecipanti; i++) {
        printf("Codice: %d, Nome: %s %s\n", partecipanti[i].codice, partecipanti[i].utente->nome, partecipanti[i].utente->cognome);
    }

    return 0;
}