#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, divisore;
    int resto = 1;
    printf("Inserire un intero per verificare se sia primo\n");
        scanf("%d", &x);
    divisore = x - 1;
    while(resto && divisore > 1){
        resto = x % divisore;
        divisore--;
    }
    if (divisore == 1)
        printf("Il numero \212 primo");
    else
        printf("Il numero non \212 primo");
    return 0;
}
