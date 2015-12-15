#include <stdio.h>
#include <math.h>
#include "Goodwin.h"

int main(){

const int maxn = 500000;
int n;
float h;    // h = timestep
conc result[maxn];

scanf( "%f %f %f %f", &result[0].X, &result[0].Y, &result[0].Z, &h );
if(h<0){
	printf("The timestep size %g is not valid, must be >0.\n",h);
	return (-1);
}
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


for(n=1;n<=maxn;n++){
    result[n] = RungeKutta(result[n-1],h);
	printf("%f %f %f %f\n",result[n].X, result[n].Y, result[n].Z, n*h);
}


return 0;
}
