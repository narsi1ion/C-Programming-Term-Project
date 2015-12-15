#include <stdio.h>
#include <math.h>
#include "Goodwin.h"

need constants (rates) for integration. Rather tha nhaving them floating around in RK fxn, have them get set in main, and then pass the struct containing the constants to the integrator. 
    Alternatively, in a header file, use defines to use preprocessor directives. So like, define v0 = 

int main(){

return 0;
}
