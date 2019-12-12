#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Stampa degli indirizzi di z e w, differiscono di 4 byte perchè vengono dichiarate
    // una dopo l'altra e l'int è di esattamente 4 byte
    int z, w;
    z = 5;
    w =3;
    printf("z: %d\nPuntatore z: %p\nPuntatore w: %p\n", z, &z, &w);

    // Questa notazione indica che p andrà a memorizzare un indirizzo e che quindi avrà un valore a 64 bit
    // Sostanzialmente significa che p è un puntatore, i puntatori sono tutti uguali ma differiscono per cosa
    // puntano, in questo caso p è un puntatore che punta ad un int
    int *p;
    p = &z;
    // Accedi all'indirizzo di memoria p(che punta a z) e aggiungi 1, questo modifica il valore di z di 1 senza toccarla
    *p += 1;
    printf("\nDopo aver aggiunto 1 tramite il puntatore\nz: %d\np(che punta a z): %p\n", z, p);

    return 0;
}

void swap(int a, int b){
    int tmp;

    tmp = a;
    a = b;
    b = tmp;

    return;
}
