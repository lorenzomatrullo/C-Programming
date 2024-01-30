# Algoritmo di Ordinamento per Selezione di Minimo (AOSMIN)
*Lo scopo di un Algoritmo di Ordinamento per Selezione di Minimo è ordinare un array di dati trovando ripetutamente l'elemento minimo nell'array e scambiarlo con l'elemento nella posizione corrente.*

* **DATI** --> numeri, caratteri, stringhe di caratteri o qualsiasi altro insieme di dati

* **INPUT** --> array + array size

* **OUTPUT** --> array con i dati ordinati

<br>

*Viene utilizzato `size - 1` perchè l'indice degli array in programmazione C inizia da 0.*
<br>
*Dato che il nostro scopo è quello di confrontare l'elemento minimo dell'array e scambiarlo con l'elemento nella posizione corrente, se iniziassimo da `i = 0` non avremmo elementi a sinistra da confrontare, in quanto non ci sono indici inferiori a 0.*


**1)** L'AOSMIN è basato sull'approccio incrementale, per questo viene utilizzato il `for loop` affinchè si possa ripetere l'azione di ordinamento finchè le condizioni espresse siano accettate.

<br>

**2)** Il primo `for loop` inizia dal primo elemento dell'array continuando fino all'ultimo elemento, garantendo che alla fine dell'algoritmo l'ultimo elemento sia automaticamente nella posizione corretta.

<br>

**3)** Il ciclo esterno `j` viene inizializzato a `i + 1`, ossia dall'elemento successivo a quello attuale di `i`.
<br>
Il ciclo continua fintanto che scorra solo la parte dell'array che non è stata ancora ordinata dal ciclo esterno `i`.

<br>


```c
int array[] = {64, 25, 12, 22, 11};
int size = sizeof(array)/sizeof(array[0]);

void AOSMIN(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Trova l'indice del minimo elemento nell'array non ordinato
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        // Scambia l'elemento minimo trovato con il primo elemento non ordinato
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}
```