#include <stdio.h>
#include <stdlib.h>

#define N 5
void mult(int v[], int n, int x);

int main()
{
    int v[N];
    int i, x;

    for(i=0; i < N; i++){
    printf("Inserisci l'elemento %d del vettore\n", i);
        scanf("%d", &v[i]);
    }
    printf("Inserire il numero per cui moltiplicare ogni elemento\n");
        scanf("%d", &x);

    mult(v, N, x);

    printf("Il nuovo vettore \212\n");

    for(i=0; i < N; i++){
    printf("v[%d]: %d\n", i, v[i]);
    }
    return 0;
}

void mult(int v[], int n, int x){
    int i;
    for(i=0; i < n; i++){
        v[i] *= x;
    }
}
