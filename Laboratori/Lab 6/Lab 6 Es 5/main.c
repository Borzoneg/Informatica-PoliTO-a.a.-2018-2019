#include <stdio.h>
#include <stdlib.h>
int power(int base, int esponente);
int main()
{
    int a, b;
    printf("Inserisci Base ed esponente\n");
        scanf("%d %d", &a, &b);
    printf("%d alla %d: %d", a, b, power(a,b));
    return 0;
}

int power(int base, int esponente){
    int r = 1;
    for(int i=0; i < esponente; i++){
        r *= base;
    }
    return r;
}
