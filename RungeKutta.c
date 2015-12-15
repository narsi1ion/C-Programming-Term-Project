#include <stdio>
#include <math.h>
#include "Goodwin.h"

/*Given concs(t=0), derivatives of X,Y & Z, find concs(t=i)*/
conc RungeKutta(A,h){
  conc result,k1,k2,k3,k4,temp;
  k1 = DeriveConcs(A);
  temp.X = A.X + h/2*k1.X;
  temp.Y = A.Y + h/2*k1.Y;
  temp.Z = A.Z + h/2*k1.Z;
  k2 = DeriveConcs(temp);
  temp.X = A.X + h/2*k2.X;
  temp.Y = A.Y + h/2*k2.Y;
  temp.Z = A.Z + h/2*k2.Z;
  k3 = DeriveConcs(temp);
  temp.X = A.X + h*k3.X;
  temp.Y = A.Y + h*k3.Y;
  temp.Z = A.Z + h*k3.Z;
  k4 = DeriveConcs(temp);
  
  result.X = A.X + (k1.X + 2*k2.X + 2*k3.X + k4.X)*h/6;
  result.Y = A.Y + (k1.Y + 2*k2.Y + 2*k3.Y + k4.Y)*h/6;
  result.Z = A.Z + (k1.Z + 2*k2.Z + 2*k3.Z + k4.Z)*h/6;
  
return result;
}

