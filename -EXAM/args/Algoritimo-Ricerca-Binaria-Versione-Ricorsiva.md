# Algoritmo di Ricerca Binaria - Versione Ricorsiva (ARBINric)

L'algoritmo di ricerca binaria è un metodo efficace per trovare un elemento in un array ordinato. 
<br>
In questa spiegazione, vedremo come funziona l'algoritmo di ricerca binaria implementato in modo ricorsivo.

## Funzionamento dell'Algoritmo

1. **Inizializzazione:**
   - Si parte da un array ordinato in modo crescente.
   - Si definisce l'elemento da cercare.

2. **Definizione dell'Intervallo di Ricerca:**
   - Si prendono due estremi, solitamente l'inizio e la fine dell'array.
   - Si calcola il punto medio dell'intervallo `(sinistra + destra) / 2`.

3. **Confronto con l'Elemento Mediano:**
   - Si confronta l'elemento da cercare con l'elemento al punto medio dell'intervallo.
   - Se corrispondono, l'elemento è stato trovato e si restituisce la sua posizione.
 
4. **Ricerca Ricorsiva:**
   - Se l'elemento da cercare è minore dell'elemento al punto medio, si effettua una ricerca binaria nella prima metà dell'intervallo.
   - Se è maggiore, si effettua una ricerca binaria nella seconda metà dell'intervallo.
   - Questo processo viene ripetuto ricorsivamente fino a quando l'elemento viene trovato o finché l'intervallo diventa vuoto.

5. **Ripeti**:
    - Questo processo viene ripetuto ricorsivamente fino a quando l'elemento viene trovato o finché l'intervallo diventa vuoto.

5. **Risultato**:
   - Se l'elemento viene trovato, restituire la sua posizione.
   - Altrimenti, restituire un valore che indica che l'elemento non è presente nell'array.


## Vantaggi dell'Algoritmo

- Efficienza: L'algoritmo di ricerca binaria ha una complessità logaritmica, il che significa che impiega un numero di passaggi proporzionale al logaritmo del numero di elementi nell'array.

- Adatto per grandi dataset: Grazie alla sua efficienza, l'algoritmo di ricerca binaria è ideale per la ricerca in grandi insiemi di dati.

<br>

```c
// INPUT
int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
int array_length = sizeof(array)/sizeof(array[0]);

printf("\nWhich number do you wanna find: ");
int find;
scanf("%d", &find);


// OUTPUT
int result = binarySearch(array, 0, length - 1, find);

if(result != -1){
    printf("The element %d is present at index %d in the array.\n", find, result);
} else {
    printf("The element %d is not present in the array.\n", find);
}


// FUNCTION
int binarySearch(int array[], int left, int right, int find) {

    if (left <= right) {
        int middle = (left + right) / 2;

        if (array[middle] == find){
            return middle;
        } else if (array[middle] > find){
            return binarySearch(array, left, middle - 1, find);
        } else {
            return binarySearch(array, middle + 1, right, find);
        }
    }

    // If the element is not present in the array, return -1
    return -1;
}
```