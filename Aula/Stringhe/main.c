#include <stdio.h>
#include <stdlib.h>

#define N 5

int lunghezza_stringa(char s[]);

int main()
{
    char s[N + 1];
    // Lo posso fare solo al momento dell'inizializzazione
    char s1[] = "Ciao!";
    // Si arrabbia un botto perchè s è un vettore
    // s = "Ciao";
    // Inizializzazione giusta
    s[0] = 'c';
    s[1] = 'i';
    s[2] = '\0';

    // Restituisce 2 perchè ci dice quanto è lunga la stringa non il vettore
    printf("Lunghezza stringa s: %d Lunghezza stringa s1: %d\n", lunghezza_stringa(s), lunghezza_stringa(s1));
    printf("Stringa: %s", s);
    return 0;
}

int lunghezza_stringa(char s[]){
    int i;
    i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}
