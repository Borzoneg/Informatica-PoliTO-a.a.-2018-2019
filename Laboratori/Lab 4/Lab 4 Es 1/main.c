#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, dis;
    printf("Scrivi i coefficienti dell'equazione di secondo grado della forma ax^2 + bx + c = 0\n");
    scanf("%d %d %d", &a, &b, &c);
    dis = (b * b) - (4 * a * c);
    if(dis > 0)
        printf("L'equazione ha due soluzioni distinte");
    else if (dis == 0)
        printf("L'equazione ha due soluzioni coincidenti");
    else
        printf("L'equazione non ha soluzioni");
    return 0;
}
