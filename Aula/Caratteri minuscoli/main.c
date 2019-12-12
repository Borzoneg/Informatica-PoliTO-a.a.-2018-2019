#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=0; i < 26; i++){
        printf("%c: %d\n", 'a' + i, 'a' + i);
    }
    return 0;
}
