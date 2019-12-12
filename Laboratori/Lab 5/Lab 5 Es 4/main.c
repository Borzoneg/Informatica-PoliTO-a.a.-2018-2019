#include <stdio.h>
#include <stdlib.h>

#define N 5
int main()
{
    int v1[N] = {0};
    int flag = 0;
    int index = N;

    printf("Inserisci il primo numero\n");
        scanf("%d", &v1[0]);
    printf("Inserisci un numero strettamente crescente o decrescente rispetto a quello di prima\n");
        scanf("%d", &v1[1]);

    if (v1[0] < v1[1]){
        for (int i=2; i < N && !flag; i++){
            printf("Inserisci un numero strettamente crescente rispetto a quello di prima\n");
            scanf("%d", &v1[i]);
            if (v1[i] <= v1[i - 1]){
                flag++;
                index = i;
            }
        }
    }

    else{
        for (int i=2; i < N && !flag; i++){
            printf("Inserisci un numero strettamente decrescente rispetto a quello di prima\n");
            scanf("%d", &v1[i]);
            if (v1[i] >= v1[i - 1]){
                flag++;
                index = i;
            }
        }
    }


    printf("Il vettore \212\n");
    for (int i=0; i < index; i++)
        printf("%d ", v1[i]);
    return 0;
}
