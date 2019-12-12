#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 10

int s2_in_s1(char* s2, char* s1, int n);

int main() {
    char s1[N + 1];
    char s2[N + 1];
    int i, let = 0, num = 0;

    printf("Inserire stringa n1\n");
        gets(s1);
    printf("Inserire stringa n2\n");
        gets(s2);
    if(s2_in_s1(s2, s1, N))
        printf("CONTENUTO\n");
    for(i=0; i<strlen(s1); i++){
        if(isalpha((int)s1[i]))
            let++;
        if(isdigit((int)s1[i]))
            num++;
    }

    printf("Hai inserito la stringa %s, di lunghezza %d contenente %d lettere e %d numeri", s1, strlen(s1), let, num);

    return 0;
}


int s2_in_s1(char* s2, char* s1, int n){
    int i, j, cug = 0;
    int inval[N] =  {0};
    for(i = 0; s1[i] != '\0'; i++){
        for(j=0; s2[j] != '\0'; j++){
            if((int)s1[i] == (int)s2[j] && !inval[i]) {
                cug++;
                inval[i] = 1;
            }
        }
    }

    if(cug >= strlen(s2))
        return 1;
    else
        return 0;
}