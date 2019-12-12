#include <stdio.h>
#include <ctype.h>

#define N 60
int main() {
    char s [N + 1];
    int l [5] = {0};
    int i, lett = 0, inpar = 1, nparole = 0, lp = 0, k = 0;

    printf("Inserire la stringa, massimo 60 caratteri e massimo 5 parole\n");
    gets(s);

    for(i=0;i < N; i++, lp=0){
        if(inpar && isspace((int)(s[i]))){
            l[k] = lp;
            k++;
        }
        if(isspace((int)(s[i]))){
            inpar = 1;
            nparole++;
        }
        if(isalpha((int)(s[i]))){
            lett++;
            if(inpar)
                lp++;
        }
        if(!isalpha((int)(s[i])) && inpar)
            inpar = 0;

    }

    if(s[N] != '\0' || nparole > 5)
        printf("La stringa non \212 valida");
    else
        printf("La stringa contiene %d parole\n"
               "Lunghezza media parole: %.2f\n%d"
                , nparole, (float)lett / nparole, lett);
    for(i=0; i < 5; i++){
        if(l[i] != 0)
            printf("La %d parola \212 lunga %d caratteri", i+1, l[i]);
    }
    return 0;
}