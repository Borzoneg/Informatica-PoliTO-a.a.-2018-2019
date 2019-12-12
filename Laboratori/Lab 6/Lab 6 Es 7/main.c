#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float invsin(float z1, float z2,float k, float e);

int main()
{
    printf("%.2f", invsin(-1, 1, 0.6, 0.2));
    return 0;
}

 float invsin(float z1, float z2, float k, float e){
    float z;
    do{
        z = (z1 + z2)/ 2;
        if(sin(z) > k )
            z2 = z;
        else
            z1 = z;
    }while(sin(z) != k && ((z2 - z1) / 2.0) > e);
    return z;
 }
