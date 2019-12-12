#include <stdio.h>
#include <mem.h>

#define C 8
#define R 6
int main() {
    char palude [R][C];
    /*= {{'.', '*', '*', '*', '.', '.'},
       {'*', '.', '.', '.', '.', '.'},
       {'.', '*', '*', '.', '.', '.'},
       {'*', '.', '.', '*', '.', '.'},
       {'.', '.', '.', '.', '*', '.'},
       {'.', '.', '.', '*', '.', '*'}};
       */
    int salti [C];
    int c, r, righe, colonne, last_jump = 0, i, trovato = 1, nsalti = 0, trovato_percorso = 0;
    FILE *f;
    char line[C + 2];
    char nome_file []= "C:\\Users\\borzo\\Documents\\Programmazione\\C\\PoliTO a.a 2018-2019\\File\\Palude.txt";


    // Lettura da file della matrice
    f = fopen(nome_file, "r");
    if(f != NULL){
        for(r=0; r < R && fgets(line, C + 2, f) != NULL; r++){
            for(c=0; c < C && c < (strlen(line)); c++){
                if(line[c] != '\n')
                    palude[r][c] = line[c];
            }
        }
        colonne = c;
        righe = r;
    }
    else{
        printf("La lettura del file non \212 stata possibile");
        return 1;
    }
    fclose(f);

    // Stampa della matrice
    printf("Questa \212 la matrice da te inserita\n");
    for(r=0; r < righe ; r++){
        for(c=0; c < colonne; c++){
            printf("%c", palude[r][c]);
        }
        printf("\n");
    }

    for(i=0, nsalti=0; i < righe && !trovato_percorso; i++) {
        // Ricerca del primo 'sasso', se ne trovo uno lo invalido così che dopo non riparta di nuovo da lì
        for (r = 0; r < righe && !last_jump; r++) {
            if (palude[r][0] == '*') {
                last_jump = 1;
                palude[r][0] = '_';
            }
        }
        // Se non lo trova mette a 0 trovato cosa che non fa entrare nel secondo ciclo
        if (!last_jump)
            trovato = 0;
            // Altrimenti setta il primo elemento del vettore dove salvo i salti e
            // la posizione dell'ultimo salto su r-1 (perchè incrementa prima di uscire dal ciclo
        else {
            salti[0] = r - 1;
            last_jump = r - 1;
        }
        // Ciclo sulle colonne
        for (c = 1, trovato  = 1; c < colonne && trovato; c++) {
            // Se parto dalla prima riga devo controllare solo quella adiacente o quella sotto di riga
            if (last_jump == 0) {
                for (r = last_jump, trovato = 0; r < last_jump + 2 && !trovato; r++) {
                    if (palude[r][c] == '*') {
                        trovato = 1;
                        salti[c] = last_jump = r;
                    }
                }
            }
            // Se parto dall'ultima riga devo controllare solo quella adiacente o quella sopra di riga
            else if (last_jump == righe - 1) {
                for (r = last_jump - 1, trovato = 0; r < last_jump + 2 && !trovato; r++) {
                    if (palude[r][c] == '*') {
                        trovato = 1;
                        salti[c] = last_jump = r;
                    }
                }
            }
                // Altrimenti sia quella sopra che quella sotto oltre a quella adiacente
            else {
                for (r = last_jump - 1, trovato = 0; r < last_jump + 3 && !trovato; r++) {
                    if (palude[r][c] == '*') {
                        trovato = 1;
                        salti[c] = last_jump = r;
                        nsalti++;
                    }
                }
            }
        }
        if(trovato)
            trovato_percorso = 1;
    }
        // Se alla fine di tutto il ciclo trovato è rimasto uno ho trovato un percorso
        if (trovato) {
            printf("La rana ha fatta questo percorso:\n");
            for (i = 0; i < colonne; i++) {
                printf("%d\n", salti[i]);
            }
        } else
            printf("Non c'\212 percorso");

    return 0;
}