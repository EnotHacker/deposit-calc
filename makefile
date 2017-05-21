all: main

BU = build/src
BI = bin
SR = src

main: $(BU)/main.o $(BU)/depcalc.o
	@if [ ! -d $(BI) ] ; then mkdir bin; fi
	gcc $(BU)/main.o $(BU)/depcalc.o -o $(BI)/depcalc
$(BU)/main.o: $(SR)/main.c
	@if [ ! -d $(BU) ] ; then mkdir build; mkdir build/src; fi
	gcc -Wall -Werror -c $(SR)/main.c -o $(BU)/main.o
$(BU)/depcalc.o: $(SR)/depcalc.c
	@if [ ! -d $(BU) ] ; then mkdir build; mkdir build/src; fi
	gcc -Wall -Werror -c $(SR)/depcalc.c -o $(BU)/depcalc.o

.PHONY : clean pr

clean:
	rm -rf build/src/* bin/*
