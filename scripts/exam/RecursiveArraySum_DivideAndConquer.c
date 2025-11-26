#include <stdio.h>

int sommaArrayDivideEtImpera(int array[], int size){
    int middle = (size - 1) / 2;
    
    if (size == 1){
        return array[0];
    }
    else{
        return sommaArrayDivideEtImpera(array, middle + 1) + sommaArrayDivideEtImpera(array + middle + 1, size - middle -1);
    }
}

// complessità di spazio: n (in place)