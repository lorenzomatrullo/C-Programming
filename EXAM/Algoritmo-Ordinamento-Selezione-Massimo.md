# Algoritmo di Ordinamento per Selezione di Massimo (AOSMAX)
*Lo scopo di un Algoritmo di Ordinamento per Selezione di Massimo è ordinare un array di dati trovando ripetutamente l'elemento massimo nell'array e spostarlo nella posizione corretta.*

* **DATI** --> numeri, caratteri, stringhe di caratteri o qualsiasi altro insieme di dati

* **INPUT** --> array + array size

* **OUTPUT** --> array con i dati ordinati

<br>

*Viene utilizzato `size - 1` perchè l'indice degli array in programmazione C inizia da 0.*
<br>
*Dato che il nostro scopo è quello di scambiare l'elemento massimo dell'array con l'ultimo elemento dell'array non ordinato, se iniziassimo da `i = 0` non avremmo elementi a sinistra da confrontare, in quanto non ci sono indici inferiori a 0.*


**1)** L'AOSMAX è basato sull'approccio incrementale, per questo viene utilizzato il `for loop` affinchè si possa ripetere l'azione di ordinamento finchè le condizioni espresse siano accettate.

<br>

**2)** Il primo `for loop` inizia dal fondo dell'array grazie alla seguente espressione `int i = size - 1`.
<br>
Il ciclo continua fintanto che l'indice `i` è maggiore di 0, poichè l'algoritmo sposta il massimo elemento verso la fine dell'array.

<br>

**3)** Il ciclo `decrementa i` ad ogni iterazione, scorrendo l'array dall'ultimo elemento verso il primo `(i--)`.

<br>


```c
int array[] = {64, 25, 12, 22, 11};
int size = sizeof(array)/sizeof(array[0]);

void AOSMAX(int array[], int size) {
    for (int i = size - 1; i > 0; i--) {
        // 1. Inizia dal fondo dell'array
        int max_index = i;

        // 2. Trova l'indice del massimo elemento nell'array non ordinato
        for (int j = 0; j < i; j++) {
            if (array[j] > array[max_index]) {
                max_index = j;
            }
        }

        // 3. Scambia l'elemento massimo trovato con l'ultimo elemento non ordinato
        int temp = array[max_index];
        array[max_index] = array[i];
        array[i] = temp;
    }
}
```