#include <stdio.h>
#include <stdlib.h>

#define N 5
int main()
{
    int v[N];
    int tmp;

    for(int i=0; i < N; i++){
        printf("Inserisci un valore\n");
            scanf("%d", &tmp);
            if(i == 0)
                v[i] = tmp;

            for(int j=i; j > -1; j--){
                if(tmp < v[j]){
                    v[j+1]  = v[j];
                    v[j] = tmp;
                }
            }
    }

    for(int i=0; i < N; i++){
        printf("%d\n", v[i]);
    }
    return 0;
}
