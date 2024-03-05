# Algoritimo Ricorsivo di Somma Array - Approccio Divide et Impera
*Questo codice calcola la somma degli elementi di un array utilizzando l'approccio "divide et impera".
<br>
La somma dell'array viene calcolata ricorsivamente dividendo l'array in sottoarray fino a quando non si raggiunge il caso base.*

<br>

## Spiegazione del Codice
Il codice è composto da due funzioni:
1. `sum_subarray`: Questa funzione calcola ricorsivamente la somma di un sottoarray.
2. `sum_array`: Questa funzione funge da punto di ingresso per la somma dell'intero array.

<br>

## Funzionamento dell'Algoritmo

1. **Inizializzazione:**
   - Si definisce un array di elementi.
   - Si definisce la dimensione dell'array.

2. **Parametri:**
   - Si prendono due estremi, solitamente l'inizio e la fine dell'array.
   - Si calcola il punto medio dell'intervallo `(sinistra + destra) / 2`.

3. **Function Sub Array (Caso Base):**
   - Se `left` è maggiore di `right`, significa che il sottoarray è vuoto, quindi la funzione restituisce 0.
   - Se `left` è uguale a `right`, significa che il sottoarray ha un solo elemento, quindi la funzione restituisce quell'elemento.
 
4. **Function Sub Array (Caso Ricorsiva):**
   - Il sottoarray viene diviso in due metà, e la funzione viene chiamata ricorsivamente per ciascuna metà.
   - I risultati delle metà sinistra e destra vengono sommati insieme e restituiti.

5. **Function Sum Array**:
    - Questa funzione è un wrapper attorno a `sum_subarray`, che chiama la funzione `sum_subarray` con i parametri appropriati per sommare l'intero array.
    - Restituisce il risultato ottenuto da `sum_subarray`.

5. **Risultato**:
    - La codice restituirà la somma degli elementi dell'array


<br>


```c
// INPUT
int array[] = {1, 2, 3, 4, 5};
int array_size = sizeof(array)/sizeof(array[0]);


//OUTPUT
int result = sum_array(array, array_size);
printf("La somma degli elementi dell'array è: %d\n", result);


//FUNCTION
int sum_subarray(int array[], int left, int right) {
    // Casi base
    if (left > right) {
        return 0;
    } else if (left == right) {
        return array[left];
    } else {
        // Caso ricorsivo
        int middle = (left + right) / 2;
        int left_sum = sum_subarray(array, left, middle);
        int right_sum = sum_subarray(array, middle + 1, right);
        return left_sum + right_sum;
    }
}

// Funzione principale per sommare un array utilizzando l'approccio Divide et Impera
int sum_array(int array[], int array_length) {
    return sum_subarray(array, 0, array_length - 1);
}
```