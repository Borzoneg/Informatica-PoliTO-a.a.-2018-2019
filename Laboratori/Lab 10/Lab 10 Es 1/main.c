#include <stdio.h>
#include <stdlib.h>

#define M 10000
int main(int argc, char* argv[]) {
    if(argc == 3){
        int a, b;
        if(argv[1] != NULL)
            a = atoi(argv[1]);
        if(argv[2] != NULL)
            b = atoi(argv[2]);
        if((a < -M || a > M) || (b < -M || b > M))
            printf("Un valore non rientra nell'intervallo");
        else
            printf("Somma dei due numeri: %d", a + b);
    }
    else
        printf("Errore nell'inserimento dei parametri");
    return 0;
}