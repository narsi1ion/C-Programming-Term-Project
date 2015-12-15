#include <stdio.h>
#include <math.h>
#include "Goodwin.h"

conc DeriveConcs(conc A){
    conc result;
    result.X = V0/(1+pow((A.Z / Km),P)) - K1*A.X;
    result.Y = V1*A.X - K2*A.Y;
    result.Z = V2*A.Y - K3*A.Z;
return result; // Make this return something that is a conc
}
