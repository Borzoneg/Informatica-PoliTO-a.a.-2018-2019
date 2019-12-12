#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    int n;
    printf("Inserisci il numero reale\n");
    scanf("%f", &x);
    float media = x + 1;
    int i = 0, somma = 0;
    while(media > x && i < 10){
        if (i == 0)
            media = 0;
        printf("Inserisci un numero intero da aggiungere alla media:\n");
        scanf("%d", &n);
        somma += n;
        media = (float)somma / (i + 1);
        i++;
    }
    printf("La media \212 %.2f", media);
    return 0;
}
