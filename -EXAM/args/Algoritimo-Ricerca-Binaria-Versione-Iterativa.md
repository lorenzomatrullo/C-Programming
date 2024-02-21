# Algoritmo di Ricerca Binaria - Versione Iterativa (ARBINi)

L'algoritmo di Ricerca Binaria è un algoritmo per trovare un elemento all'interno di un array ordinato. 
<br>
Funziona dividendo ripetutamente l'intervallo di ricerca a metà fino a trovare l'elemento desiderato.


1. **Inizializzazione:**
   - Si parte da un array ordinato in modo crescente.

2. **Definizione dell'Intervallo di Ricerca:**
   - Si prendono due estremi, solitamente l'inizio e la fine dell'array.
   - Si calcola il punto medio dell'intervallo `(sinistra + destra) / 2`.

3. **Confronto con l'Elemento Mediano:**
   - Si confronta l'elemento da cercare con l'elemento al punto medio dell'intervallo.
   - Se corrispondono, l'elemento è stato trovato e si restituisce la sua posizione.

4. **Ricerca Iterativa:**
   - Se il valore corrispondente è maggiore del valore cercato, spostare `destra` a `medio - 1`.
   - Se il valore corrispondente è minore del valore cercato, spostare `sinistra` a `medio + 1`.

5. **Ripeti**:
   - Ripetere i passaggi dal 2 al 4 fino a quando non viene trovato l'elemento o `sinistra` supera `destra`.

6. **Risultato**:
   - Se l'elemento viene trovato, restituire la sua posizione.
   - Altrimenti, restituire un valore che indica che l'elemento non è presente nell'array.

## Esempio in C

```c
// INPUT
int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int array_length = sizeof(array)/sizeof(array[0]);

printf("\nWhich number do you wanna find: ");
int find;
scanf("%d", &find);


// OUTPUT
int position = binary_search(array, array_length, find);

if(position != -1){
    printf("The element %d was found at position %d\n", find, position);
} else {
    printf("The element %d was not found in the list\n", find);
}


// FUNCTION
int binary_search(int array[], int array_length, int find){
    int left = 0;
    int right = array_length - 1;

    while(left <= right){
        int middle = (left + right) / 2;

        if(array[middle] == find){
            return middle;
        } else if(array[middle] < find){
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1; // Element not found
}
```