#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Scrivi i due numeri da scambiare tra loro\n");
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;

    printf("Le due variabili scambiate sono\nx:%d y:%d",x , y);
    return 0;
}
