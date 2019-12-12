#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    // Stampo v come puntatore  ecapisco che v non è altro che un puntatore in cui
    // viene salvato il primo posto dell'array
    printf("v = %p\n", v);
    // Stampo gli indirizzi dei vari int contenuti nell'array, saltano di 4 byte perchè gli
    // int sono di 4 byte
    printf("v[0]= %p\n", &v[0]);
    printf("v[1]= %p\n", &v[1]);
    printf("v[2]= %p\n", &v[2]);
    printf("v[3]= %p\n", &v[3]);
    printf("v[4]= %p\n", &v[4]);
    return 0;
}
