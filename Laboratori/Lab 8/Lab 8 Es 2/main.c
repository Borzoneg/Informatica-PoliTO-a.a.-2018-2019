#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 5

int main() {
    char s[N];
    int i, c, parole = 1, inpar = 1;
    printf("Inserisci una stringa massima lung al massimo %d caratteri\n", N);
        fgets(s, (N + 1), stdin);
        printf("%s\n", s);
    if(s != NULL) {
        for (i = 0; i < strlen(s); i++) {
            c = (int) s[i];
            if(inpar)
                if(!isalnum(c))
                    parole++;
                else
                    inpar = 0;
            if(isalpha(c))
                inpar = 1;
            if (!isupper(c))
                s[i] = toupper(s[i]);
            if (!isalnum(c)){
                s[i] = '_';
            }
            if (isdigit(c))
                s[i] = '*';
        }
    }
    else
        printf("Stringa non valida");

    for(i=0; i<strlen(s); i++){
        printf("%c\n", s[i]);
    }
    printf("La nuova stringa \212 %s\nCi sono %d parole", s, parole);
    return 0;
}