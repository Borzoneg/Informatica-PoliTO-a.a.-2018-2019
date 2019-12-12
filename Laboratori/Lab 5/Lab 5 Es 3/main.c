#include <stdio.h>
#include <stdlib.h>

#define N 5
int main()
{
    int v1 [N] = {05};
    int v2 [N] = {0};
    int tmp;
    for (int i=0; i < N; i++){
        printf("Inserisci un numero positivo o un numero negativo divisbile per 3\n");
        scanf("%d", &tmp);
        if((tmp < 0) && (tmp % 3 != 0))
            printf("Il tuo valore non \212 valido, verra' scartato\n");
        else
            v1[i] = tmp;

        printf("Inserisci un numero negativo non multiplo di 3 e dispari\n");
        scanf("%d", &tmp);
        if((tmp > 0) || (tmp % 3 == 0) || (tmp % 2 == 0))
            printf("Il tuo valore non \212 valido, verra' scartato\n");
        else
            v2[i] = tmp;
    }

    printf("I due vettori sono rispettivamente:\n");
    for (int i=0; i < N; i++){
        printf("%d, ", v1[i]);
    }
    printf("\n");
    for (int i=0; i < N; i++){
        printf("%d, ", v2[i]);
    }
    return 0;
}
