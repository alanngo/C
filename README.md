# C 

### Starter File

- Copy and paste this code 
- Make sure you save your file as '.h' or '.c'
```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	return 0;
}
```

### Compile and Run C file using gcc
#### Prerequisites
Ubuntu
```bash
$ sudo apt update
$ sudo apt install make
$ sudo apt install gcc
$ sudo apt install gdb
```

##### Create a standard output file
use '-o' flag to create a regular executable file
```bash
$ gcc [SOURCE_FILE].c -o [OUTPUT_FILE]
```
How to run your output file
```bash
$ ./[OUTPUT_FILE]
```
##### Create a debug output file
use '-g' flag to create an executable debug file
```bash
$ gcc -g [SOURCE_FILE]
```
How to run your output file
```bash
$ ./a.out
```
How to debug your output file
```bash
$ gdb a.out
```

#### We use makefiles to avoid typing full gcc commands
- be familiar with how makefile works
- be proficient w/ Linux Terminal
```makefile
# replace [SOURCE FILE] w/ your c file that has a main function
# replace [OUTPUT_FILE] w/ the output file built using your c file

# use these commands in terminal
all:
    make clean
    make build
    make run

debug:
    make build-debug
    make run-debug


# use these tags to build the commands above
build: 
    gcc [SOURCE_FILE] -o  [OUTPUT_FILE]

build-debug:
    gcc -g [SOURCE_FILE]

clean: # RUN THIS COMMAND BEFORE YOU PUSH TO GITHUB/TURN-IN!
    rm -rf [OUTPUT_FILE]
    rm -rf a.out

run:
    ./[OUTPUT_FILE]

run-debug:
    gdb a.out
```