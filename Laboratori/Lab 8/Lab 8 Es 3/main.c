#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10
int validita_stringa(int hour, int min);

int main () {
    int min1, hours1, min2, hours2, x1, x2;
    char s2[N], s1[N], s3[N];

    gets(s1);
    sscanf( s1, "%d:%d", &hours1, &min1);
    gets(s2);
    sscanf( s2, "%d:%d", &hours2, &min2);

    if(validita_stringa(hours1, min1) && validita_stringa(hours2, min2)){
        x1 = min1 + 60 * hours1;
        x2  = min2 + 60 * hours2;
        if(x1 < x2) {
            x2 -= x1;
            sprintf(s3, "%d_minuti", x2);
            printf("%s", s3);
        }
        else
            printf("x2 minore x1");
    }
    else
        printf("Una o entrambe le stringhe non sono valide\n");
    return(0);
}

int validita_stringa(int hour, int min){
    return(hour >= 0 && hour <= 23) && (min <= 59 && min >= 0);
}