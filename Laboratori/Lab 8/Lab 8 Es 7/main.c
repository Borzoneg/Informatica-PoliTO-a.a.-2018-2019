#include <stdio.h>

#define R 5
#define C 5

int main() {
    int matrix [R][C];
    int r, c, righe, colonne;
    int val, rip;
    int found = 0, k, trovato = 0;

    printf("Definisci quante righe e quante colonne\n");
        scanf("%d %d", &righe, &colonne);
    printf("Inserire il valore da cercare\n");
        scanf("%d", &val);
    printf("Inserire quante volte deve ripetersi\n");
        scanf("%d", &rip);
    printf("Inserisci la matrice elemento per elemento\n");
    for(r=0; r < righe; r++){
        for(c=0; c < colonne; c++){
            scanf("%d", &matrix[r][c]);
        }
    }
    printf("Questa \212 la matrice\n");
    for(r=0; r < righe; r++){
        for(c=0; c < colonne; c++){
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }

    for(r=0; r < righe; r++){
        for(c=0, trovato = 0; c < colonne && !trovato; c++, found=0) {
            if (matrix[r][c] == val) {
                for (k = 0; k < rip && (k + c) < colonne; k++) {
                    if (matrix[r][c + k] == val)
                        found++;
                }
                if (found >= rip) {
                    printf("La sequenza compare nella riga %d\n", r);
                    trovato = 1;
                }
            }
        }
    }

    for(c=0; c < colonne; c++){
        for(r=0, trovato = 0; r < righe && !trovato; r++, found=0) {
            if (matrix[r][c] == val) {
                for (k = 0; k < rip && (k + r) < righe; k++) {
                    if (matrix[r + k][c] == val)
                        found++;
                }
                if (found >= rip) {
                    printf("La sequenza compare nella colonna %d\n", c);
                    trovato = 1;
                }
            }
        }
    }
    return 0;
}