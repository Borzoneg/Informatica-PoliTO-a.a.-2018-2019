#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int c, spazio = 1;
    while((c = getchar()) != EOF){
        if(spazio){
            c = toupper(c);
            spazio = 0;
        }
        if(isspace(c))
            spazio = 1;

    putchar(c);
        }
    return 0;
}
