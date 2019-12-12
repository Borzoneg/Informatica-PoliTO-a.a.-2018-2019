#include <stdio.h>
#include <stdlib.h>

#define N 10
int main()
{
    int vett [N];
    int s = 0;
    int max;
    for (int i=0; i<N; i++){
        printf("Inserire il valore numero %d del vettore: ", i + 1);
        scanf("%d", &vett[i]);
    }

    printf("\n");

    for (int i=0; i<N; i++){
        printf("%d, ", vett[i]);
    }

    max = vett[0];
    for (int i=0; i<N; i++){
        s += vett[i];
        if (vett[i] > max)
            max = vett[i];
    }
    printf("\nLa media \212 %.2f", ((float)s / N));
    printf("\nIl massimo \212 %d", max);

    for (int i=0; i<N; i++){
        if (vett[i] == max)
            printf("\nIl massimo compare all'indice: %d", i);
    }

    return 0;
}
