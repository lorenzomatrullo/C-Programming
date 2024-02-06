# Algoritmo di String Matching (ASM)
*L'Algoritmo di String Matching risolve il problema del "matching", ovvero trova tutte le occorrenze di una stringa di caratteri (chiamata "stringa chiave") all'interno di un'altra stringa di caratteri (chiamata "stringa testo").*


* **INPUT** --> stringa testo + stringa chiave.

* **OUTPUT** --> numero di occorrenze della stringa chiave all'interno della stringa testo.

<br>



**1)** L'algoritimo si basa su un'iterazione lunga `string_length - key_length + 1`
<br>
*(+1 per evitare confronti inutili nelle iterazioni finali)*.

<br>

**2)** Ad ogni passo, si controlla se una sottostringa di `string`, di lunghezza uguale alla `key`, coincide con quest'ultima.
<br>
Se il confronto risulta **positivo**, si incrementa il contatore delle occorrenze.


<br>


```c

// INPUT
char string[] = "Hello world to world";
char key[] = "world";
    
printf("\nString: %s\n", string);
printf("Key string: %s\n", key);


// OUTPUT    
int occurrences = string_matching(key, string);
    
printf("Number of occurrences of the key string in the text: %d\n", occurrences);


// FUNCTION
int string_matching(char key[], char string[]) {
    int key_length = strlen(key);
    int string_length = strlen(string);
    int count_key = 0;
    
    for (int i = 0; i <= string_length - key_length + 1; i++) {
        if (strncmp(key, &string[i], key_length) == 0) {
            count_key++;
        }
    }
    
    return count_key;
}
```