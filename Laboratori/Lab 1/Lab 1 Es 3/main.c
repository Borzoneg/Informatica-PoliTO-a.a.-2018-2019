#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 7;
    int b = 3;

    printf("%d", (a == b));
    printf("\n%d", (a != b));
    printf("\n%d", (a <= b));
    printf("\n%d", (a >= b));
    printf("\n%d", (a = b));

    int x = 0;
    int y = 0;
    printf("\n\n%d",((x && y) || (!y))&& (!x));

    y = 1;
    printf("\n%d",((x && y) || (!y))&& (!x));

    x = 1;
    y = 1;
    printf("\n%d",((x && y) || (!y))&& (!x));

    y = 0;
    printf("\n%d",((x && y) || (!y))&& (!x));
    return 0;
}
