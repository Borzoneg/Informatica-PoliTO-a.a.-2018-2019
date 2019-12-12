#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x;
    printf("Quali sono i coefficienti a e b dell'equazione di forma ax + b = 0 che vuoi risolvere?\n");
    scanf("%f %f", &a, &b);

    if (a == 0 ){
        if(b != 0)
            printf("L'equazioe \212 impossibile");
        else
            printf("L'equazioe \212 indeterminata");
    }

    else{
        x = (float)a/(-b);
        printf("Il valore di x \212: %f", x);
    }
    return 0;
}
