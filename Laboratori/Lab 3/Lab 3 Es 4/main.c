#include <stdio.h>
#include <stdlib.h>

#define BASE 100
#define CARATT 40
#define USATO -20

int main()
{
    int price, months, years, features;
    printf("Inserire numero di anni di utilizzo e numero di caratteristiche del telefono\n");
    scanf("%d %d", &years, &features);
    months = years * 12;
    price = months * USATO + features * CARATT + BASE;
    printf("Il massimo prezzo spendibile per questo telefono \212 %d", price);
    return 0;
}
