typedef struct { float X,Y,Z; } conc;

conc DeriveConcs( conc A );

conc RungeKutta( conc A, float h);

// Initial concentrations of X, Y, Z (mRNA conc., enzyme conc., inhibitor conc.)
#define X0 0
#define Y0 0
#define Z0 0

// Number of timesteps (number of iterations)
#define NTS 20000

// Size of timesteps. 
#define TS 0.1

// Rate of mRNA production (transcription: input > 0)
#define V0 0.5
// Rate of mRNA degredation (input > 0)
#define K1 0.1
// Rate of enzyme production (translation: input > 0)
#define V1 0.5
// Rate of enzyme degredation (input > 0)
#define K2 0.1
// Rate of inhibitor activation (catalysis: input > 0)
#define V2 0.5
// Rate of inhibitor degredation (input > 0)
#define K3 0.24

// Hill constant. P > 8 leads to limit cycle.
#define P 10.0

// Michaelis constant. Affinity of inhibitor for gene. Input > 0. 
#define Km 1.0
