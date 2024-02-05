# Algoritmo di Fusione (AFUS)
*Lo scopo di un Algoritmo di Fusione è quello di unire 2 array di dati in maniera ordinata.*

* **DATI** --> numeri, caratteri, stringhe di caratteri o qualsiasi altro insieme di dati

* **INPUT** --> 2 array + 2 array size

* **OUTPUT** --> merged array con i dati ordinati

<br>



**1)** I tre indici `i`, `j` e `k` vengono inizializzati a 0 
<br>
`i` = posizione corrente in `array1`
<br>
`j` = posizione corrente in `array2`
<br>
`k`= posizione corrente in `arrays_merged`

<br>

**2)** Inizia un `while loop` che continua fino a quando uno dei due array (array1 o array2) è completamente esplorato.
<br>
All'interno del loop viene effettuato un **confronto** tra l'*elemento corrente* di `array1` e l'*elemento corrente* di `array2`.

<br>


**3)** Se l'*elemento corrente* di `array1` è <ins>**MINORE**</ins> dell'*elemento corrente* di `array2`:
<br>
*<ins>**AGGIUNTO**</ins> ad `arrays_merged` l'elemento di `array1` e l'indice `i` viene *incrementato*. 
<br>
*Altrimenti viene aggiunto l'elemento di `array2` e l'indice `j` viene *incrementato*.

*L'indice* `k` *viene incrementato indipendentemente da quale array viene scelto.*

<BR>

**4)** Dopo il completamento del ciclo, potrebbero essere rimasti elementi in uno degli array.
<br>
Quindi, vengono eseguiti altri due `while loop` per copiare eventuali elementi rimanenti da `array1` e `array2` a `arrays_merged`.

<br>


```c
// INPUT
int array1[] = {0, 2, 4, 6, 8};
int array1_length = sizeof(array1)/sizeof(array1[0]);

int array2[] = {1, 3, 5, 7, 9};
int array2_length = sizeof(array2)/sizeof(array2[0]);

int arrays_merged_length = array1_length + array2_length;
int arrays_merged[arrays_merged_length];

merge(array1, array1_length, array2, array2_length, arrays_merged);


// OUTPUT
printf("arrays_merged = ");
for(int i = 0; i < arrays_merged_length; i++){
     printf("%d ", arrays_merged[i]);
}


// FUNCTION
void merge(int array1[], int array1_length, int array2[], int array2_length, int arrays_merged[]){

    int i = 0, j = 0, k = 0;

    while(i < array1_length && j < array2_length){
        if(array1[i] < array2[j]){
            arrays_merged[k] = array1[i];
            i++;
        } else {
            arrays_merged[k] = array2[j];
            j++;
        }
        k++;
    }

    while(i < array1_length){
        arrays_merged[k] = array1[i];
        k++;
        i++;
    }

    while(j < array2_length){
        arrays_merged[k] = array2[j];
        k++;
        j++;
    }
}
```