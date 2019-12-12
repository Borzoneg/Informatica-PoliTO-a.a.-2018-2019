#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int i;
    unsigned int u = 0;
    for (i=0; i > -1; i++)
        x = i;
    printf("Massimo integer: %d\n", x);
    printf("Minimo integer: %d\n", i);
    printf("Minimo unsigned integer: %u", u);
    printf("Massimo unsigned integer: %u", u--);
    return 0;
}
