#include <stdio.h>
#include <string.h>

#define N 2
#define M 10

int insert_product(char warehouse[][M], float price[], int n, char new_product[], float price_new_product);
void print_all(char warehouse[][M], float price[], int n, float *avg, float *max);
int update_product(char warehouse[][M], float price[], int n, char product[], float new_price);
int remove_product(char warehouse[][M], float price[], int n, char old_product[]);

int main() {
    char warehouse [N][M];
    char new_product [M];
    char old_product[M];
    float new_product_price, media, massimo;
    float price [N];
    int i, scelta, uscita = 0;

    // Inizializzazione del vettore a -2
    for(i=0; i < N; i++)
        price[i] = -2;

    while(!uscita) {
        printf("Decidi cosa fare:\n"
               "1) Inserire un nuovo prodotto\n"
               "2) Visualizzare attuale listino\n"
               "3) Aggiornare un prdotto\n"
               "4) Rimuovere un prodotto\n"
               "5) Uscita\n");
        scanf("%d", &scelta);
        switch (scelta) {
            case (1):
                printf("Qual \212 il nome del nuovo prodotto (Non superare i %d caratteri)\n", M);
                    scanf("%s", new_product);
                printf("Qual \212 il prezzo del nuovo prodotto\n");
                    scanf("%f", &new_product_price);
                switch(insert_product(warehouse, price, N, new_product, new_product_price)){
                    case(0):
                        printf("Prodotto gia' presente\n");
                        break;
                    case(1):
                        printf("Nuovo prodotto inserito con successo !\n");
                        break;
                    case(2):
                        printf("Listino pieno\n");
                        break;
                }
                break;
            case (2):
                print_all(warehouse, price, N, &media, &massimo);
                printf("Media: %.2f\n"
                       "Massimo: %.2f\n", media, massimo);
                break;
            case (3):
                printf("Qual \212 il nome del prodotto da modificare(Non superare i %d caratteri)\n", M);
                    scanf("%s", new_product);
                printf("Qual \212 il nuovo prezzo del prodotto\n");
                    scanf("%f", &new_product_price);
               switch(update_product(warehouse, price, N, new_product, new_product_price)){
                   case (1):
                       printf("%s \212 stato modificato con successo!", new_product);
                       break;
                   case (2):
                       printf("%s non esiste nel listino", new_product);
                       break;
               }
                break;
            case (4):
                printf("Inserire il nome del prodotto da rimuovere\n");
                    scanf("%s", old_product);
                switch(remove_product(warehouse, price, N, old_product)) {
                    case (1):
                        printf("%s \212 stato rimosso con successo!", new_product);
                        break;
                    case (2):
                        printf("%s non esiste nel listino", new_product);
                        break;
                }
                break;
            case (5):
                uscita = 1;
                break;
            default:
                printf("Valore inserito non previsto!\n");
                break;
        }
    }
    return 0;
}

int insert_product(char warehouse[][M], float price[], int n, char new_product[], float price_new_product){
    int i, last_i;

    for(i=0; i < n ; i++){
        if(!strcmp(warehouse[i], new_product) && strlen(warehouse[i]) == strlen(new_product))
            return 0;
    }
    for(i=0; i < n && price[i] != -2; i++);
        last_i = i;
    if(last_i == n)
        return 2;
    for(i=0; i < M && (new_product[i]) != '\0'; i++){
        warehouse[last_i][i] = new_product[i];
    }
    warehouse[last_i][i] = '\0';
    price[last_i] = price_new_product;
    return 1;
}

void print_all(char warehouse[][M], float price[], int n, float *avg, float *max){
    int i;
    *max = 0;
    float somma = 0;
    for(i=0; i < n && price[i] != -2; i++){
        printf("%s: %.2f\n", warehouse[i], price[i]);
        somma += price[i];
        if(price[i] > *max)
            *max = price[i];
    }
    *avg = somma / i;
}

int update_product(char warehouse[][M], float price[], int n, char new_product[], float new_price) {
    int i;
    for (i = 0; i < n; i++) {
        if (!strcmp(warehouse[i], new_product) && strlen(warehouse[i]) == strlen(new_product)){
            price[i] = new_price;
            return 1;
        }
    }
    return 0;
}

int remove_product(char warehouse[][M], float price[], int n, char old_product[]){
    int i;
    for (i = 0; i < n; i++) {
        if (!strcmp(warehouse[i], old_product) && strlen(warehouse[i]) == strlen(old_product)){
            price[i] = -2;
            return 1;
        }
    }
    return 0;
}