#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_1, int_2;
    float float_1, float_2;
    printf("Inserisci 2 interi, poi 2 numeri reali\n");
    scanf("%d %d %f %f", &int_1, &int_2, &float_1, &float_2);

    printf("\nVariabile\tValue\n"
           "Int_1, Int_2\t%5d %5d\n"
           "Float_1\t\t%5.2f\n"
           "Float_2\t\t%5.3f",
           int_1, int_2, float_1, float_2);
    return 0;
}
