#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l;
    printf("Inserisci il lato della figura geometrica\n");
    scanf("%d", &l);

    //Triangolo allineato a sinsitra
    for(int i=0; i < l; i++){
        for (int j=0; j < (i + 1); j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
    //Quadrato
    for(int i=0; i < l; i++){
        for (int j=0; j < l; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
    // Triangolo allineato al centro
    int r = 0;
    for(int i=0; i < l; l-=2, r++){
        for (int k=0; k < r; k++){
            printf(" ");
        }
        for (int j=0; j < l; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
