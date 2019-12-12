#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    do{
        c = getchar();
        printf("Premuto: %d\n", c);
    }
    while(c != EOF);
    printf("Intercettato EOF\n");
    return 0;
}
