# C 

## Starter File

- The code below is the starter code for any C project
- Make sure you save your file as '.h' or '.c'
```C
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	return 0;
}
```

## Compile and Run C file using gcc
 
### Prerequisites
If you have a Windows System, follow steps 1-8 to download WSL
1. Open Start Menu search for and click "developer settings".
2. Enable "Developer Mode"
3. Open Start Menu, search for and click on "turn windows features on or off"
4. Check the box that says <b><i>"Windows Subsystem for Linux"</i></b> and reboot your system
5. Go to Microsoft Store and search <b><i>"Ubuntu"</i></b>
6. Click on the first result and install it
7. Once it installs, click "Launch". It will go through initialization steps
8. Enter your username and password when prompted
    - If you don't see any anonymous characters when typing your password, that's normal. 
    - If you think you screwed up your password, press Backspace at least 20 times then re-type and re-enter. DON'T FORGET YOUR PASSWORD

Once you open your terminal, follow the installation steps

WSL/Ubuntu
```bash
$ sudo apt update
$ sudo apt install make
$ sudo apt install gcc
$ sudo apt install gdb
```

### Create a standard output file
use '-o' flag to create a regular executable file
```bash
$ gcc [SOURCE_FILE].c -o [OUTPUT_FILE]
```
How to run your output file
```bash
$ ./[OUTPUT_FILE]
```
### Create a debug output file
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
### Using Makefiles
- we use them to avoid typing the full command repeatedly
- they function similar to aliases
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
    make clean
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

## Setting Up vscode
- vscode is a really useful tool for developers
- Download it here: <b>https://code.visualstudio.com/download</b>
### Windows/Linux
#### Shortcuts
```
Ctrl + N => New File
Ctrl + O => Open a file
Ctrl + K + O => Open directory
Ctrl + Shift + ~ => Open Terminal
Ctrl + C => Copy
Ctrl + X => Cut
Ctrl + V => Paste
Ctrl + / => Comment selection
Ctrl + F => Find
Ctrl + H => Find/Replace
```
#### Debugging
##### Prerequisites
1. Open vscode and press Ctrl + Shift + X.
2. Search for and install the following
    - C/C++
    - Remote-WSL <i>(If you are using Windows 10)</i>
3. Restart vscode
##### Integrating the Debugger
If you are using Windows 10, open your workspace as a WSL Ubuntu Session
- Press F1 and type "remote wsl: reopen folder in wsl" and press enter
- you should be connected to your linux environment

1. In your working directory, create a directory named ".vscode"
2. In ".vscode" create these files
    - launch.json
    - tasks.json
3. Populate the files accordingly

<b>launch.json</b>
```json
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "gcc - Build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/a.out",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: gcc build active file",
            "miDebuggerPath": "/usr/bin/gdb"
        }
    ]
}
```
<b>tasks.json</b>
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "C/C++: gcc build active file",
            "command": "gcc",
            "type": "shell",
            "args": 
            [
                "-g", // you need this argument for debugging
                [MAIN_FILE]
            ],
            "problemMatcher": [
                "$tsc"
            ],
            "presentation": {
                "reveal": "always"
            },
            "group": "build"
        }
    ]
}
```
4. Save all your files
5. Click Run -> Start Debugging or press F5