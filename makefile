
CFLAGS= -I thirdparty -I src -c -Wall -Werror

SOURCES = main.c depcalc.c
EXECUTABLE = main
DIR = build/src
DUR = bin
DAR = src

SOURCES_TEST = main.c deposit_test.c validation_test.c
EXECUTABLE_TEST = test
BUT = build/test
DT = test

all: main test

main: $(DUR)/$(EXECUTABLE) 

$(DUR)/$(EXECUTABLE): $(DIR)/main.o $(DIR)/depcalc.o
	@if [ ! -d $(DUR) ] ; then mkdir bin; fi
	gcc $(DIR)/main.o $(DIR)/depcalc.o -o $(DUR)/$(EXECUTABLE)

$(DIR)/main.o: $(DAR)/main.c
	@if [ ! -d $(DIR) ] ; then mkdir build; mkdir build/src; fi
	gcc $(CFLAGS) -c $(DAR)/main.c -o $(DIR)/main.o

$(DIR)/depcalc.o: $(DAR)/depcalc.c
	@if [ ! -d $(DIR) ] ; then mkdir build; mkdir build/src; fi
	gcc $(CFLAGS) -c $(DAR)/depcalc.c -o $(DIR)/depcalc.o



test: $(DUR)/$(EXECUTABLE_TEST)


$(BUT)/main.o: $(DT)/main.c
	@if [ ! -d $(BUT) ] ; then mkdir build; mkdir build/test; fi
	gcc $(CFLAGS) -c $(DT)/main.c -o $(BUT)/main.o

$(BUT)/deposit_test.o: $(DT)/deposit_test.c
	@if [ ! -d $(BUT) ] ; then mkdir build; mkdir build/test; fi
	gcc $(CFLAGS) -c $(DT)/deposit_test.c -o $(BUT)/deposit_test.o

$(BUT)/validation_test.o: $(DT)/validation_test.c
	@if [ ! -d $(BUT) ] ; then mkdir build; mkdir build/test; fi
	gcc $(CFLAGS) -c $(DT)/validation_test.c -o $(BUT)/validation_test.o 

$(DUR)/$(EXECUTABLE_TEST): $(BUT)/main.o $(BUT)/deposit_test.o $(BUT)/validation_test.o $(DIR)/depcalc.o
	@if [ ! -d $(DUR) ] ; then mkdir bin; mkdir bin/deposit-calc-test; fi
	gcc $(BUT)/main.o $(BUT)/deposit_test.o $(BUT)/validation_test.o $(DIR)/depcalc.o -o $(DUR)/$(EXECUTABLE_TEST)


.PHONY : clean test
clean:
	rm -rf build/src/*.o build/test/*.o bin/deposit-calc/* bin/deposit-calc-test/*

