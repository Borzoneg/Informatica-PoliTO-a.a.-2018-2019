#include <stdio.h>
#include <stdlib.h>
#define K 7

int main()
{
    int a, b, c, d;
    float x;

    printf("Inserire i valori dei quattro coefficienti\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    x = (float)-(d * K) / (a + (b * c));

    printf("Il valore della x \212: %.2f", x);

    return 0;
}
