# Algoritimo Ricorsivo di Somma Array - Approccio Incrementale
*Questo codice calcola la somma degli elementi di un array utilizzando l'approccio incrementale.*

<br>

## Funzionamento dell'Algoritmo

1. **Inizializzazione:**
   - Si definisce un array di elementi.
   - Si definisce la dimensione dell'array.

2. **Function Sum (Caso Base):**
   - Se la lunghezza dell'array è 0, viene restituito 0
 
3. **Function Sum (Caso Ricorsivo):**
   - Altrimenti, si richiama ricorsivamente con la dimensione decrementata di 1 fino al raggiungimento del caso base.
   <br>
   Ogni chiamata ricorsiva aggiunge il valore dell'elemento corrente alla somma degli elementi rimanenti.

4. **Risultato**:
    - La codice restituirà la somma degli elementi dell'array.


<br>


```c
//INPUT
int array[] = {1, 2, 3, 4, 5};
int array_length = sizeof(array)/sizeof(array[0]);


//OUTPUT
printf("The sum of the array elements is: %d\n", sum(array, array_length));


//FUNCTION
int sum(int array[], int array_length) {
    // Base case: when the array size is 0, the sum is 0
    if (array_length == 0) {
        return 0;
    } else {
        // The sum is the current element plus the sum of the remaining elements
        return array[array_length - 1] + sum(array, array_length - 1);
    }
}
```