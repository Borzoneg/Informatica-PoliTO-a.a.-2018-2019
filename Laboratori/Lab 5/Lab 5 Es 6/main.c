#include <stdio.h>
#include <stdlib.h>

#define N 9
int main()
{
    int v1 [N];
    int v2 [N];
    int tmp, i, cerc;
    int dup = 0;

    for(i=0; i < N && tmp >= 0; i++){
        printf("Inserisci un numero da inserire nel vettore \(valore negativo per uscire\)\n");
            scanf("%d", &tmp);
        if(tmp >= 0)
            v1[i] = tmp;
    }

    int inf = 1;
    while(inf){
        printf("\nInserisci il valore da cercare\n");
            scanf("%d", &cerc);
        if(cerc < 0)
            inf = 0;

        for(int j=0; j < i - 1; j++){
            if(v1[j] == cerc){
                v2[dup] = j;
                dup++;
            }
        }
        if(dup == 0)
            printf("Il numero da te cercato non \212 presente\n");
        for(int j=0; j < dup; j++){
            printf("Il numero da te cercato \212 presente all'indice: %d\n", v2[j]);
        }
        dup = 0;
    }
//    Fatto in classe, stampo solo una volta valori duplicati
//    int v [N] = {3, 2, 3, 2, 2, 3, 2, 4, 4};
//    int v_flag [N] = {0};
//    int dup = 0;
//    for(int i=0; i < N; i++){
//        if(!v_flag[i]){
//            for(int j= i+1; j < N; j++){
//                if(v[i] == v[j]){
//                    v_flag[j] = 1;
//                    dup++;
//                }
//            }
//            if(dup > 0){
//                printf("v\[%d\] = %d ripetuto %d volte\n", i, v[i], dup);
//                dup = 0;
//            }
//        }
//    }
//
    return 0;
}
