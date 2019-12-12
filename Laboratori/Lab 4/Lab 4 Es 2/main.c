#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    printf("Inserisci una data in questa forma:  gg/mese/anno\n");
    scanf("%d/%d/%d", &day, &month, &year);
    switch(month){
    case(1):
        printf("La data \212: %d Gennaio %d", day, year);
        break;
    case(2):
        printf("La data \212: %d Febbraio %d", day, year);
        break;
    case(3):
        printf("La data \212: %d Marzo %d", day, year);
        break;
    case(4):
        printf("La data \212: %d Aprile %d", day, year);
        break;
    case(5):
        printf("La data \212: %d Maggio %d", day, year);
        break;
    case(6):
        printf("La data \212: %d Giugno %d", day, year);
        break;
    case(7):
        printf("La data \212: %d Luglio %d", day, year);
        break;
    case(8):
        printf("La data \212: %d Agosto %d", day, year);
        break;
    case(9):
        printf("La data \212: %d Settembre %d", day, year);
        break;
    case(10):
        printf("La data \212: %d Ottobre %d", day, year);
        break;
    case(11):
        printf("La data \212: %d Novembre %d", day, year);
        break;
    case(12):
        printf("La data \212: %d Dicembre %d", day, year);
        break;
    default:
        printf("La data da te inserita non \212 valida");
        break;
    }
    return 0;
}
