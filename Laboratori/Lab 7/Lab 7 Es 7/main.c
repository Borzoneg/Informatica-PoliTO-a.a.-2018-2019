#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int c, spazio = 1, a_capo = 0, nparole = 0, nlettere = 0;
    while((c = getchar())!= EOF){
        if(spazio){
            nparole++;
            spazio = 0;
        }
        if(isspace(c))
            spazio = 1;
        if(c == 10)
            a_capo++;
        if(isalpha(c))
            nlettere++;
        printf("%c", c);
        }
    printf("Numero di parole: %d\n"
           "Numero di righe: %d\n"
           "Lunghezza media parole: %.2f", nparole, a_capo, (float)nlettere/nparole);
    return 0;
}
