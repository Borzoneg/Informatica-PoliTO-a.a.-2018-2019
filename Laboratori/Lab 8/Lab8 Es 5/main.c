#include <stdio.h>
#include <string.h>
#define N 60
int main() {
    char s[N + 1], prodotto[N + 1];
    int prezzi [3];
    char nomi [3][N];
    int i, rip, trovato = 0;
    for(i=0; i < 3; i++) {
        printf("Inserisci il prodotto secondo questa formattazione: \"nome prezzo\"\n");
            gets(s);
        sscanf(s, "%s %d", nomi[i], &prezzi[i]);
    }

    while(!trovato) {
        printf("Ora inserisci quale prodotto vuoi comprare e quanti ne desideri");
        scanf("%s %d", prodotto, &rip);
        for (i = 0; i < 3 && !trovato; i++) {
            if (!strcmp(nomi[i], prodotto))
                trovato = 1;
        }
    }

    printf("La tua spesa \212: %d", (prezzi[i] * rip));



    return 0;
}