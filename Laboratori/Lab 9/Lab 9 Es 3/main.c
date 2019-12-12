#include <stdio.h>
#include <string.h>

#define N 20

int main() {
    char file_path [] = "C:\\Users\\borzo\\Documents\\Programmazione\\C\\PoliTO a.a 2018-2019\\File\\Treni.txt";
    char line [(N + 1) * 4];
    char partenza[N + 1], arrivo[N + 1], citta [N + 1];
    int marr, oarr, mpar, opar;
    FILE* f = fopen(file_path, "r");

    //printf("Inserire il percorso del file");

    printf("Inserire la citta' di cui si vogliono conoscere arrivi e partenze\n");
    scanf("%s", citta);
    if(f != NULL) {
        while (fgets(line, (N + 1) * 4, f) != NULL) {
            sscanf(line, "%s %d %d %s %d %d", partenza, &opar, &mpar, arrivo, &oarr, &marr);
            if (!strcmp(partenza, citta))
                printf("Un treno parte alle %d:%d da %s\n", opar, mpar, partenza);
            if (!strcmp(arrivo, citta))
                printf("Un treno arriva alle %d:%d da %s\n", oarr, marr, arrivo);
        }
    }
    else{
        printf("Errore nella lettura del file");
        return 1;
    }
    fclose(f);
    return 0;
}