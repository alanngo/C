all:
	make clean
	make build
	make run

debug:
	make clean
	make build-debug
	make run-debug

build:
	gcc test.c -o test

build-debug:
	gcc -g test.c

clean:
	rm -rf test
	rm -rf a.out

run:
	./test

run-debug:
	gdb a.out
