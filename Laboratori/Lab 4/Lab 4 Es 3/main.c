#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int i = 0;
    while (a){
        printf("Inserisci un numero \(0 per uscire\)");
        scanf("%d", &a);
        i += a;
    }
    printf("La somma dei numeri da te immessi \212: %d", i);
    return 0;
}
