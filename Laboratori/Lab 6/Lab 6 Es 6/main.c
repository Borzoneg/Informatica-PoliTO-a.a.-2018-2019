#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

void from_dec(int n, int base, int n_in_base[]);
int to_dec(int n_in_base[], int base);
void inverti_array(int v[], int n);

int main()
{
    int n, i, dec, trovato;
    int v[N] = {0};

    trovato = 0;

    printf("Inserire il numero\n");
        scanf("%d", &n);

    for(i=2; i < n && !trovato; i++, dec=0){
        from_dec(n, i, v);
        inverti_array(v, N);
        dec = to_dec(v, i);
        if(dec == n){
            trovato = 1;
            printf("La base \212: %d", i);
        }
    }
        if(!trovato)
            printf("Il numero non \212 palindromo in nessuna base");
    return 0;
}


void from_dec(int n, int base, int n_in_base[]){
    int i;
    for(i=0; i < N; i++){
        n_in_base[i] = 0;
    }
    for(i=0; n != 0; i++){
        n_in_base[i] = n % base;
        n = n / base;
    }
}

int to_dec(int n_in_base[], int base){
    int i, x, dec;
    dec = 0;
     for(i=0; i < N; i++){
        x = pow(base, i);
        dec += (x * n_in_base[i]);
    }
    return dec;
}

void inverti_array(int v[], int n){
    int i, a, index_padd, numero;
    numero = 0;
    for(i=n - 1; i > -1 && !numero; i--){
        if(v[i] == 0)
            index_padd ++;
        else
            numero = 1;
    }
    for(i=0; i < (n - index_padd)/2; i++){
        a = v[i];
        v[i] = v[n - 1 - i -index_padd];
        v[n - 1 - i - index_padd] = a;
    }
}
