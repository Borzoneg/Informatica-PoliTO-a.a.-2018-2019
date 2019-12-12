#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, MCD, a, b, i;
    printf("Inserisci i due numeri di cui vuoi l'MCD\n");
    scanf("%d %d", &n1, &n2);
    if (n1 < n2){
        a = n1;
        n1 = n2;
        n2 = a;
    }
    a = n1;
    b = n2;
    while (i){
        i  = n1 % n2;
        if (!i)
            printf("MCD tra %d e %d = %d", a, b, n2);
        n1 = n2;
        n2 = i;
    }
    return 0;
}
