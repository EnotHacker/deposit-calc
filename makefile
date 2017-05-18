.PHONY: all clean makedir test
all: main

clean:
	rm -rf build/src/*

makedir:
	mkdir bin
	mkdir build
	mkdir build/src
	mkdir build/test

deletedir:
	rm -rf build/test
	rm -rf build/src
	rm -rf build
	rm -rf bin
	
build/src/main.o: src/main.c
	gcc -Wall -Werror -c -o build/src/main.o src/main.c

build/src/depcalc.o: src/depcalc.c
	gcc -Wall -Werror -c -o build/src/depcalc.o src/depcalc.c

main: deletedir makedir build/src/main.o build/src/depcalc.o
	gcc -Wall -Werror -o bin/depcalc build/src/main.o build/src/depcalc.o

build/test/main.o: test/main.c
	gcc -Wall -Werror -c -o build/test/main.o test/main.c

build/test/validation_test.o: test/validation_test.c
	gcc -Wall -Werror -c -o build/test/validation_test.o test/validation_test.c

build/test/deposit_test.o: test/deposit_test.c
	gcc -Wall -Werror -c -o build/test/deposit_test.o test/deposit_test.c
	
test: deletedir makedir build/test/main.o build/test/validation_test.o build/test/deposit_test.o build/src/depcalc.o
	gcc -Wall -Werror -o bin/test build/test/main.o build/test/validation_test.o build/test/deposit_test.o build/src/depcalc.o

