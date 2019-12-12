#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main()
{
    int x = 5;
    int y = 3;

    swap(&x, &y);
    return 0;
}

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
    }
