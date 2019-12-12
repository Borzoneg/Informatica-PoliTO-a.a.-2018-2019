#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Scrivere il numero di cui si vuole ottenere il modulo\n");
    scanf("%d", &x);

    if(x < 0)
        printf("Il modulo \212: %d", -x);
    else
        printf("Il modulo \212: %d", x);
    return 0;
}
