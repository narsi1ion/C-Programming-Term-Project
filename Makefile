MyProject: goodwinmain.o deriveconcs.o rungekutta.o
    icc goodwinmain.o deriveconcs.o rungekutta.o -o MyProject

goodwinmain.o: GoodwinMain.c Goodwin.h
    gcc GoodwinMain.c -c

rktest: rungekutta.o deriveconcs.o
    gcc rungekutta.o deriveconcs.o -o rktest

rungekutta.o: RungeKutta.c Goodwin.h
    gcc RungeKutta.c -c

deriveconcs.o: DeriveConcs.c Goodwin.h
    gcc DeriveConcs.c -c


