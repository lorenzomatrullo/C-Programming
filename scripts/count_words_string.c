#include <stdio.h>
#include <string.h>

int count_words(char *);

int main(){
    
    char sentence[100];

    printf("Enter the sentence: ");
    scanf("%[^\n]s", &sentence);

    int wordsInSentence = count_words(sentence);

    printf("Number of words contained in the sentence: %d", wordsInSentence);


    return 0;
}

int count_words(char *string){

    int count = 0;

    for(int i = 0; i < strlen(string); i++){

        if(string[i] == ' ' && string[i + 1] != ' '){
            count++;   
        }
    }
    return count + 1;
}