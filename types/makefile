all:
	make clean
	make build
	make run

debug:
	make clean
	make build-debug
	make run-debug

build:
	gcc main.c -o main

build-debug:
	gcc -g main.c

clean:
	rm -rf main
	rm -rf a.out

run:
	./main

run-debug:
	gdb a.out
