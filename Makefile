#MyProject: goodwinmain.o deriveconcs.o rungekutta.o
#    icc goodwinmain.o deriveconcs.o rungekutta.o -o MyProject

goodwinmain.o: GoodwinMain.c Goodwin.h
    icc GoodwinMain.c -c

rktest: rungekutta.o deriveconcs.o
    icc rungekutta.o deriveconcs.o -o rktest

rungekutta.o: RungeKutta.c Goodwin.h
    icc RungeKutta.c -c

deriveconcs.o: DeriveConcs.c Goodwin.h
    icc DeriveConcs.c -c


