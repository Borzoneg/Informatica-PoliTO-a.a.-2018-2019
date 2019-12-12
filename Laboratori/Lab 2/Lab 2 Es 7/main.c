#include <stdio.h>
#include <stdlib.h>

#define N 4
int main()
{
//  Versione senza vettori
//  int x;
//  float t;
//  printf("Inserisci il valore in mV del sensore ");
//  scanf("%d", &x);
//
//  if(x >= 0 && x <= 20)
//      t = 3.0 / 4.0 * x;
//  else if(x > 20 && x <= 55)
//      t = 12.0 / 35.0 * x + 285.0 / 35.0;
//  else if(x > 55 && x <= 100)
//      t = 8.0 / 45.0 * x + 775.0 / 45.0;
//  else
//      printf("Il valore non \212 compreso nell'intervallo");
//  printf("Il valore della temperatura \212: %0.2f", t);


//  Versione con vettori
    int mV, temp;
    int x [N] = {0, 15, 27, 35};
    int y [N] = {0, 20, 55, 100};
    float m [N - 1];
    int q [N - 1];

    for(int i=0; i < N - 1; i++){
        m[i] = ((float)(x[i] - x[i + 1])) / (y[i] - y[i + 1]);
        q[i] = y[i] - m[i] * x[i];
    }
    printf("Inserisci il valore in mV del sensore ");
        scanf("%d", &mV);

    int retta_trov = 0;
    for(int i=0; i < N - 1 && !retta_trov; i++){
        if(mV > y[i] && mV <= y[i+1]){
            temp = m[i] * mV + q[i];
            printf("Temperatura: %d", temp);
            retta_trov = 1;
        }
    }
    if(!retta_trov)
        printf("Valore fuori range");


    return 0;
}
