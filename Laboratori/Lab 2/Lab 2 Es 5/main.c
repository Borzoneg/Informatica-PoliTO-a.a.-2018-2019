#include <stdio.h>
#include <stdlib.h>

int main()
{
    float receipt, tax, price;
    printf("Quanto \212 stato pagato l'articolo e quante tasse bisogna pagare?\n");
    scanf("%f %f", &price, &tax);
    receipt = (price + price * (tax / 100));
    printf("Il prezzo totale \212 %0.2f",receipt);
    return 0;
}
