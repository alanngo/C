all: # $ make all MAIN=<FILE_WITH_MAIN>
	make clean
	make build $(MAIN)
	make run

debug: # $ make debug MAIN=<FILE_WITH_MAIN.c>
	make clean
	make build-debug $(MAIN)
	make run-debug

build:
	gcc $(MAIN) -o main

build-debug:
	gcc -g $(MAIN)

clean:
	rm -rf main
	rm -rf a.out

run:
	./main

run-debug:
	gdb a.out
