#include <stdio.h>
#include <stdlib.h>
#define N 5

float avgVect(int v[], int n);
int upperLimit(int v[], int n, int limit);
float over_Avg (int v[], int n, int *superiori);

int main()
{
    int n_sup = 0;
    int v[] = {1, 2, 4, 6, 3};
    printf("Media: %.2f\nNumero elementi del vettore sopra alla media: ",over_Avg(v, N, &n_sup));
    printf("%d\n", n_sup);
    //       avgVect(v, N), upperLimit(v, N, avgVect(v, N)));
    return 0;
}

float avgVect(int v[], int n){
    int i, somma = 0;
    for(i=0; i < n; i++){
        somma += v[i];
    }
    return (float)somma / n;
}

int upperLimit(int v[], int n, int limit){
    int i, k = 0;
    for(i=0; i < n; i++){
        if(v[i] > limit)
            k++;
    }
    return k;
}

float over_Avg (int v[], int n, int *superiori){
    int i, k = 0, somma = 0;
    float media;
    for(i=0; i < n; i++){
        somma += v[i];
    }

    media = (float)somma / n;

    for(i=0; i < n; i++){
        if(v[i] > media)
            k++;
    }
    *superiori = k;
    return media;
}
