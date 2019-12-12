#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int c, i, alfa = 0, upper = 0, digit = 0, spaces = 0, paro = 0;
    int primo_spazio = 0, carattere = 1, ultimo_spazio = 0;
    while(c != 10){
        c = getchar();
        i++;
        if(isalnum(c))
            alfa++;
        if(isupper(c))
            upper++;
        if(isdigit(c))
            digit++;
        if(isspace(c))
            spaces++;

        if(carattere){
            if(isspace(c)){
                paro++;
                primo_spazio = 0;
                carattere = 0;
        }
        else if(!isalpha(c))
            carattere = 0;
        }
        if(primo_spazio){
            if(isalpha(c))
                carattere = 1;
            else
                primo_spazio = 0;
        }
        if(isspace(c))
            primo_spazio = 1;
    }
    printf("Caratteri alfanumerici: %d\n"
            "Caratteri maiuscoli: %d\n"
            "Caratteri numerici: %d\n"
            "Caratteri spazio: %d\n"
            "Parole: %d\n", alfa, upper, digit, spaces - 1, paro);
    return 0;
}
