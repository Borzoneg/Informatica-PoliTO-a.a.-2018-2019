#include <stdio.h>
#include <stdlib.h>

#define N 5
int main()
{
    int v1[N];
    int v2[N];
    int sommav1 = 0;
    for(int i=0; i < N; i++){
        printf("Inserisci un valore per il v1\n");
            scanf("%d", &v1[i]);
            sommav1 += abs(v1[i]);
    }
    printf("\n\n");
    for(int i=0; i < N; i++){
        printf("Inserisci un valore per il v2\n");
            scanf("%d", &v2[i]);
    }
    int ele_ugu = 0;
    int dup = 0;

    for(int i=0; i < N; i++){

        for(int j=0; j < N && !ele_ugu; j++){
            if(v1[i] == v2[j]){
                v2[j] = sommav1 + 1;
                ele_ugu = 1;
                dup++;
            }
        }
        ele_ugu = 0;
    }
    if(dup == N)
        printf("I due elementi contengono gli stessi elementi");
    else
        printf("I due elementi non contengono gli stessi elementi");
    return 0;
}
