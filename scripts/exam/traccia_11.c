#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Funzione che verifica se un carattere è una vocale (maiuscola o minuscola)
int controlloVocali(char c) {
    c = tolower(c);  // Converte il carattere in minuscolo per semplificare il confronto
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Funzione che conta il numero di parole con almeno 5 vocali
int cinqueVocali(char *string) {
    char *token = strtok(string, " ");  // Suddivide la stringa in parole
    int count = 0;

    while (token != NULL) {
        int vocali = 0;
        
        // Conta le vocali in ogni parola
        for (int i = 0; token[i] != '\0'; i++) {
            if (controlloVocali(token[i])) {
                vocali++;
            }
        }

        if (vocali >= 5) {
            count++;  // Aumenta il contatore se la parola ha almeno 5 vocali
        }

        token = strtok(NULL, " ");  // Passa alla parola successiva
    }

    return count;
}

int main() {
    char input[] = "Questo è un esempio di parola con molte vocali";
    char input2[] = "questo è un esempio aerodinamico automobilistico";
    
    int risultato = cinqueVocali(input2);
    printf("Numero di parole con almeno 5 vocali: %d\n", risultato);

    return 0;
}
