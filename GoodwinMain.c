#include <stdio.h>
#include <math.h>
#include "Goodwin.h"

int main(){

const int maxn;
int n;
float h;    // h = timestep
conc result[n];

scanf( "%f%f%f%f", &result[0].X, &result[0].Y, &result[0].Z, &h );

for(n=1;n<=maxn;n++){
    result[n] = RungeKutta(result[n-1],h);
}

return 0;
}
