#include <stdio.h>
#include <stdlib.h>

#define N 5

int power(int base, int esponente);

int main()
{
    int v_base[N];
    int v_exp[N];
    int v_res[N];
    int i;
    for(i=0; i < N; i++){
        printf("Scrivi la base con indice %d: ", i);
            scanf("%d", &v_base[i]);
    }
    for(i=0; i < N; i++){
        printf("Scrivi l'esponente con indice %d: ", i);
            scanf("%d", &v_exp[i]);
    }
    for(i=0; i < N; i++){
        v_res[i] = power(v_base[i], v_exp[i]);
    }
    for(i=0; i < N; i++){
        printf("%d alla %d = %d\n", v_base[i], v_exp[i], v_res[i]);
    }
    return 0;
}

int power(int base, int esponente){
    int r = 1;
    for(int i=0; i < esponente; i++){
        r *= base;
    }
    return r;
}
