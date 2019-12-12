#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1718131502
int is_pitagorica(int a, int b, int c);

int main()
{
    int i, j, k, trovato;
    trovato = 0;
    for(i=3; i < MAX; i++){
        for(j=i; j < MAX; j++){
            for(k=j, trovato = 0; k < MAX && !trovato; k++){
                if(is_pitagorica(i, j, k)){
                    printf("a: %d, b: %d, c: %d son terna pitagorica\n", i, j, k);
                    trovato = 1;
                }
            }
        }
    }

    return 0;
}

int is_pitagorica(int a, int b, int c){
    a = (a * a) + (b * b);
    c *= c;
    if(a == c)
        return 1;
    else
        return 0;
}
