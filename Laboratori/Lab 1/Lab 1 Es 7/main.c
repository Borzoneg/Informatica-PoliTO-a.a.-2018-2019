#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grad;
    char tipo;
    printf("Inserire gradi e tipo (C o F)");
    scanf("%f%c", &grad, &tipo);

    if(tipo == 'C'){
        grad = (grad * 9/5) + 32;
        printf("Sono %.2f gradi Fahreneit", grad);
    }
    else{
        grad = (grad - 32) * 5/9;
        printf("Sono %.2f gradi Celsius", grad);
    }

    return 0;
}
