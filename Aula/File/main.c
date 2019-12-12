#include <stdio.h>

int main() {
   FILE *f;
   int c;

   f = fopen("C:\\Users\\borzo\\Documents\\Programmazione\\C\\PoliTO a.a 2018-2019\\File\\File 1.txt", "w");

   if(f == NULL){
       printf("DATTI UNA SVEJA");
       return 1;
   }

   printf("Aperto con successo\n");
   while((c = getc(f)) != EOF) {
       putc(c, stdout);
   }
   fclose(f);
   return 0;
}