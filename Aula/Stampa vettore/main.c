#include <stdio.h>
#include <stdlib.h>

void stampa_vettore(int v[], int N);

int main()
{
    int v[5] = {1, 2, 3, 4, 5};
    stampa_vettore(v, 5);
    return 0;
}
// Prima versione, uso le quadre in modo da dire al programma di non modificare quell'indirizzo
// perchè non posso modificare il puntatore di un vettore
// stampa_vettore(int *v, int N)
stampa_vettore(int v[], int N){
    for(int i=0; i < N; i++){
        printf("%d ", v[i]);
    }
}
