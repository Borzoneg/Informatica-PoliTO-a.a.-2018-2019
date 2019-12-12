#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Inserire 4 numeri positivi minori di 1000\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a >= 1000 || a < 0){
        printf("\nIl primo numero da te inserito non \212 compreso nell'intervallo [0, 1000), gli verra' assegnato 0 come valore");
        a = 0;}
    if(b >= 1000 || b < 0){
        printf("\nIl secondo numero da te inserito non \212 compreso nell'intervallo [0, 1000), gli verra' assegnato 0 come valore");
        b = 0;}
    if(c >= 1000 || c < 0){
        printf("\nIl terzo numero da te inserito non \212 compreso nell'intervallo [0, 1000), gli verra' assegnato 0 come valore");
        c = 0;}
    if(d >= 1000 || d < 0){
        printf("\nIl quarto numero da te inserito non \212 compreso nell'intervallo [0, 1000), gli verra' assegnato 0 come valore");
        d = 0;}

    int max = a;
    int min = a;

    if(b > max)
        max = b;
    if(c > max)
        max = c;
    if(d > max)
        max = d;

    if(b < min)
        max = b;
    if(c < min)
        max = c;
    if(d < min)
        max = d;

    printf("\n%d - %d = %d", max, min, (max - min));
    return 0;
}
