#include <stdio.h>
#include <string.h>

struct Prodotto {
    char *nome;
    int codice;
    double prezzo;
};

// Funzione che verifica se due prodotti sono uguali
int uguale(struct Prodotto p1, struct Prodotto p2) {
    if ((p1.codice == p2.codice) && (p1.prezzo == p2.prezzo) && (!strcmp(p1.nome, p2.nome))) {
        return 1;
    } else {
        return 0;
    }
}

// Funzione che verifica se due array di prodotti sono uguali e stampa il risultato
void uguaglianza(struct Prodotto p1[], int p1_size, struct Prodotto p2[], int p2_size) {
    if (p1_size == p2_size) {
        for (int i = 0; i < p1_size; i++) {
            if (!uguale(p1[i], p2[i])) {
                printf("I due prodotti non sono uguali.\n");
                return;
            }
        }
        printf("I due prodotti sono uguali.\n");
    } else {
        printf("I due array di prodotti hanno dimensioni diverse.\n");
    }
}

int main() {
    // Creazione di due prodotti
    struct Prodotto p1 = {"mela", 342, 1.50};
    struct Prodotto p2 = {"mela", 342, 1.50}; // Il nome è diverso, quindi non saranno uguali

    // Creazione di due array di prodotti per confrontarli
    struct Prodotto array1[] = {p1};
    int array1_size = sizeof(array1)/sizeof(array1[0]);

    struct Prodotto array2[] = {p2};
    int array2_size = sizeof(array2)/sizeof(array2[0]);

    // Confronto dei due array di prodotti
    uguaglianza(array1, array1_size, array2, array2_size);

    return 0;
}
