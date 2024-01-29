# Algoritmo di Ordinamento per Inserimento (AOINS)
*Lo scopo di un Algoritmo di Ordinamento è ordinare un array di dati.*


* **DATI** --> numeri, caratteri, stringhe di caratteri o qualsiasi altro insieme di dati

* **INPUT** --> array + array size

* **OUTPUT** --> array con i dati ordinati

<br>

*Viene utilizzato `size - 1` perchè l'indice degli array in programmazione C inizia da 0.*
<br>
*Dato che il nostro scopo è quello di confrontare il l'elemento corrente dell'array con quello che lo precede, se iniziassimo da `i = 0` non avremmo elementi a sinistra da confrontare, in quanto non ci sono indici inferiori a 0.*

`array[j + 1] = elemento corrente`
<br>

`array[j] = elemento alla sinistra di elemento corrente`

<br></br>

**1)** L'AOINS è basato sull'approccio incrementale, per questo viene utilizzato il `for loop` affinchè si possa ripetere l'azione di ordinamento dell'array fino alla fine dell'array.

<br>

**2)** Dunque, ad ogni posizione dell'array viene confrontato l'elemento corrente con quello alla sua sinistra, e se questo risulta inferiore viene spostato come primo elemento attraverso un `metodo di variabili temporanee`.

<br>

**3)** Infine, viene ripetuto il processo fino al raggiungimento dell'ultima posizione dell'array affinchè la condizione di ordinamento sia valida.

<br>

```c
int array[] = {9, 1, 8, 2, 4, 7, 6, 5, 3};
int size = sizeof(array)/sizeof(array[0]);


void sort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){

            if(array[j + 1] < array[j]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] =  temp;
            }
        }
    }
}
```