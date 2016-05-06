#include <stdio.h>
#include <math.h>
#include "Goodwin.h"

int main(){

const int maxn = NTS;
int n;
float h;    // h = timestep
conc result[maxn];

result[0].X = X0;
result[0].Y = Y0;
result[0].Z = Z0;
h = TS;

// Check timestep input
if(h<0){
	printf("The timestep size %g is not valid, must be >0.\n",h);
	return (-1);
}

// Check initial concentration input
if(result[0].X<0){
	printf("The mRNA concentration %g is not valid, must be >0.\n",result[0].X);
	return (-1);
}
if(result[0].Y<0){
	printf("The enzyme concentration %g is not valid, must be >0.\n",result[0].Y);
	return (-1);
}
if(result[0].Z<0){
	printf("The inhibitor concentration %g is not valid, must be >0.\n",result[0].Z);
	return (-1);
}

// Check rate input
if(V0 < 0 || V1 < 0 ||  V2 < 0 || K1 < 0 || K2 < 0 || K3 < 0){
	printf("All rates must be non-negative.\n");
	return (-1);
}

// Check Km
if(Km<0){
	printf("The Km value %g is not valid, must be >0.\n",Km);
	return (-1);
}

// All inputs are good, perform the calcultaions and print output
for(n=1;n<=maxn;n++){
    result[n] = RungeKutta(result[n-1],h);
	printf("%f %f %f %f\n",result[n].X, result[n].Y, result[n].Z, n*h);
}


return 0;
}
