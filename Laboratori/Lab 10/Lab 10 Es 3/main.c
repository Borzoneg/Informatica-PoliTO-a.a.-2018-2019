#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    char scelta;
    int x[4], y[4], i;
    float distanze[3], min = 0, distanza = 0;
    if(argc == 6) {
        if (argv[1] != NULL)
            scelta = argv[1][1];

        for (i = 0; i < 4; i++) {
            if (argv[i + 2] != NULL) {
                sscanf(argv[i + 2], "%d,%d", &x[i], &y[i]);
            }
        }

        min = (float) sqrt(pow(abs(x[i] - x[i + 1]), 2) + pow(abs(y[i] - y[i + 1]), 2));
        for(i=0; i < 3; i++){
            distanze[i] = (float) sqrt(pow(abs(x[i] - x[i + 1]), 2) + pow(abs(y[i] - y[i + 1]), 2));
            distanza += distanze[i];
            if(distanze[i] < min)
                min = distanze[i];
        }

        switch (scelta) {
            case 'a':
                printf("Lunghezza minima = %.2f", min);
                break;
            case 'm':
                printf("Lunghezza percorso = %.2f", distanza);
                break;
        }
    }
    else
        printf("Errore nell'inserimento dei parametri, ritenta");

    return 0;
}