#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char ch;
    int val1, val2, r;
    if(argc == 4){
        if(argv[1] != NULL)
            val1 = atoi(argv[1]);
        if(argv[2] != NULL)
            val2 = atoi(argv[2]);
        switch(argv[3][0]){
            case 'a':
                r = val1 + val2;
                printf("Risultato: %d", r);
                break;
            case 'b':
                r = val1 - val2;
                printf("Risultato: %d", r);
                break;
            case 'c':
                r = val1 * val2;
                printf("Risultato: %d", r);
                break;
            case 'd':
                if(val2 != 0) {
                    r = val1 / val2;
                    printf("Risultato: %d", r);
                }
                else
                    printf("Val2 = 0, divisione non possibile");
                break;
            default:
                printf("Opzione non compresa");
                break;
        }
    }
    else
        printf("Errore nell'inserimento dei parametri");
    return 0;
}