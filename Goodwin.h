typedef struct { float X,Y,Z; } conc;

conc DeriveConcs( conc A );

conc RungeKutta( conc A, float h);

#define V0 0.5
#define V1 0.5
#define V2 0.5
#define K1 0.1
#define K2 0.1
#define K3 0.1 
#define P 8.
#define Km 0.5

/*good range of all rate constants is 0-1
*good range for p is like 5-15 let's say
*good range for Km is 0 < Km <  50M*/
