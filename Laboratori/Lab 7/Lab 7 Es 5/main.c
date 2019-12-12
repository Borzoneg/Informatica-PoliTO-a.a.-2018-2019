#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x, y;
    int xi, yi;
    printf("Inserire i due char\n");
        scanf("%c %c", &x, &y);
    xi = (int)x;
    yi = (int)y;
    if((xi < 91 && xi > 64 || xi < 123 && xi > 96) && (yi < 91 && yi > 64 || yi < 123 && yi > 96)){
        if(xi != yi){
            if(xi > yi)
                printf("%c %c", yi, xi);
            else
                printf("%c %c", xi, yi);
        }
    }
    else if(xi > 47 && xi < 58 || yi > 47 && yi < 58)
        printf("Almeno uno dei due caratteri \212 una cifra");

    return 0;
}
