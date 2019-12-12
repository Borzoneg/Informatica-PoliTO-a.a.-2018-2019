#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n = 1456, n_log;
    int n_bit;

    n_log = log2(n);
    n_bit = (int)ceil(n_log);

    return 0;
}

double log2(double x){
    double r;
    r = log(x) / log(2);
    return r;
}
