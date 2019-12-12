#include <stdio.h>
#include <stdlib.h>

void media_void(int v[], int N, float *media);
float media_funz(int v[], int N);

int main()
{
    int v[5] = {2, 3, 2, 5, 6};
    float media;

    // Utilizzo la procedura: modifica direttamente il float media
    media_void(v, 5, &media);
    printf("Media: %.2f\n", media);

    // Utilizzo la funzione: stampo il valore ritornato da media_funz
    printf("Media: %.2f", media_funz(v, 5));
    return 0;
}

void media_void(int v[], int N, float *media){
    int somma = 0;
    for(int i=0; i < N; i++){
        somma += v[i];
    }
    *media = (float)somma / N;
    return;
}

float media_funz(int v[], int N){
    int somma = 0;
    for(int i=0; i < N; i++){
        somma += v[i];
    }
    return ((float)somma / N);
}
