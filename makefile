all: main

SOURCES = main.c depcalc.c
DIR = build/src
DUR = bin
DAR = src

main: $(DIR)/main.o $(DIR)/depcalc.o
	@if [ ! -d $(DUR) ] ; then echo "creating $(DUR)";mkdir bin; fi
	gcc $(DIR)/main.o $(DIR)/depcalc.o -o $(DUR)/depcalc
$(DIR)/main.o: $(DAR)/main.c
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)"; mkdir build; mkdir build/src; fi
	gcc -Wall -Werror -c $(DAR)/main.c -o $(DIR)/main.o
$(DIR)/depcalc.o: $(DAR)/depcalc.c
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)"; mkdir build; mkdir build/src; fi
	gcc -Wall -Werror -c $(DAR)/depcalc.c -o $(DIR)/depcalc.o

.PHONY : clean pr

clean:
	rm -rf build/src/*
