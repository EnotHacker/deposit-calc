all: main

clean:
	rm -rf build/src/*

makedir:
	mkdir bin
	mkdir build
	mkdir build/src

deletedir:
	rm -rf build/src
	rm -rf build
	rm -rf bin
	
build/src/main.o: src/main.c
	gcc -Wall -Werror -c -o build/src/main.o src/main.c

build/src/depcalc.o: src/depcalc.c
	gcc -Wall -Werror -c -o build/src/depcalc.o src/depcalc.c

main: deletedir makedir build/src/main.o build/src/depcalc.o
	gcc -Wall -Werror -o bin/depcalc build/src/main.o build/src/depcalc.o