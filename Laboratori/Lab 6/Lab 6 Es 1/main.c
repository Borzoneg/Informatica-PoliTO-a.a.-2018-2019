#include <stdio.h>
#include <stdlib.h>

#define N 5
int main()
{
    int v[N];
    for(int i=0; i < N; i++){
        printf("Inserisci un valore\n");
            scanf("%d", &v[i]);
    }

    int palindromo = 1;
    for(int i=0; i < (N - 1) && palindromo; i++){
        if(v[i] != v[N-i-1])
            palindromo = 0;

    }
    if(palindromo)
        printf("Serie palindroma");
    else
        printf("Serie non palindroma");
    return 0;
}
