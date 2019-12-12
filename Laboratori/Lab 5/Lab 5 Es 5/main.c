#include <stdio.h>
#include <stdlib.h>

#define N 7
int main()
{
    int v1 [N] = {0};

    for (int i=0; i < N; i++){
        printf("Inserisci un intero ");
        scanf("%d", &v1[i]);
        }

     for (int i=0; i < N; i++){
        if((v1[i] < v1[i + 1]) && (v1[i + 1] < v1[i + 2])){
            printf("\nLa serie di numeri \212\n%d %d %d\n", v1[i], v1[i + 1], v1[i + 2]);
            printf("La posizione del primo elemento \212 %d\n", i);
        }
     }
    return 0;
}
