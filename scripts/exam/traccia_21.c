#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void controlloPIN(int PIN) {
    int numeroTentativi = 3;  // L'utente ha 3 tentativi
    int tentativo;

    printf("Prova ad indovinare il PIN \n");

    while (numeroTentativi > 0) {
        printf("Hai a disposizione %d tentativi\n", numeroTentativi);
        printf("Inserisci il PIN (deve essere un numero di 5 cifre): ");
        
        // Controllo per assicurarsi che l'utente inserisca solo un numero a 5 cifre
        while (1) {
            if (scanf("%d", &tentativo) != 1 || tentativo < 10000 || tentativo > 99999) {
                // Se non è un numero o non ha 5 cifre, avvisa l'utente e richiedi di nuovo l'input
                printf("Errore: Devi inserire un numero di 5 cifre. Riprova: ");
                // Puliamo il buffer dell'input in caso di errore
                while (getchar() != '\n');  // Consuma i caratteri invalidi rimanenti
            } else {
                break;  // Se l'input è valido, esci dal ciclo
            }
        }

        if (PIN == tentativo) {
            printf("\nHai indovinato!\n");
            return;  // Esce dalla funzione se il PIN è corretto
        } else {
            numeroTentativi--;  // Diminuisce i tentativi disponibili
            printf("\nPIN errato.\n");
        }

        if (numeroTentativi == 0) {
            printf("Hai esaurito i tentativi!\n");
        }
    }
}

int main() {
    srand(time(0));  // Inizializza il generatore di numeri casuali con il tempo attuale

    // Genera un PIN casuale a 5 cifre
    int PIN = rand() % 90000 + 10000;  // Numero casuale tra 10000 e 99999

    printf("PIN generato: %d\n", PIN);  // Per testare, puoi commentarlo prima di far eseguire il programma all'utente

    // Chiama la funzione per controllare il PIN
    controlloPIN(PIN);

    return 0;
}
