MyProject: goodwinmain.o deriveconcs.o rungekutta.o
	gcc goodwinmain.o deriveconcs.o rungekutta.o -o MyProject -lm

goodwinmain.o: GoodwinMain.c Goodwin.h
	gcc GoodwinMain.c -c -o goodwinmain.o

rktest: rungekutta.o deriveconcs.o
	gcc rungekutta.o deriveconcs.o -o rktest

rungekutta.o: RungeKutta.c Goodwin.h
	gcc RungeKutta.c -c -o rungekutta.o

deriveconcs.o: DeriveConcs.c Goodwin.h
	gcc DeriveConcs.c -c -o deriveconcs.o
