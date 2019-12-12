#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y1 = 1;
    int y2 = 0;
    int x, i;
    for (i=0; x > -1; i++){
        x = y1 + y2;
        if (x > -1)
            printf("%d\n",x);
        y2 = y1;
        y1 = x;
    }
    printf("Il massimo di numeri rappresentabili con integer della serie \212: %d", i - 1);
    return 0;
}
