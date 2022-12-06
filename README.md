# `C - Simple Shell`

* The **Simple Shell** is part of the Holberton School learning program.
* It inteprets commands entered by the user to execute simple commands.

### Compiler and list of authorized functions
The **Simple Shell** is compiled this way :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell
```
It is using this version of GCC : *gcc version 9.4.0 (Ubuntu 9.4.0-1ubuntu1~20.04.1)*.
The authorized functions to build the simple shell are the following : access, chdir, close, closedir, execve, exit, _exit,
fflush, fork, free, getcwd, getline, getpid, isatty, kill, malloc, open, opendir, perror, read, readdir, signal, stat,
lstat, fstat, strtok, wait, waitpid, wait3, wait4, write.

### Compilation and Usage
To use the Simple Shell, compile all the c files in the repository and the header,then run the resulting executable.
```
gcc *.c shell.h -o simple_shell
./simple_shell
```

You can use **Simple Shell** interactively and non-interactively using pipes.
For example, non interactively usage will be this, in the standard shell :
```
$ echo "echo Hello world" | ./simple_shell
Hello world
```
If you execute the **Simple Shell** interactively, run *./simple_shell* and you can execute simple commands.
At the end of each execution, the simple shell displays a new prompt when ready for usage.
If you want to exit the simple shell, simply type *exit* and press Enter.
```
$ ./simple_shell
ls
main.c tokenizer.c envfunctions.c shell.h README.md stringfunctions.c
exit
$
```

### Command execution
* The user enters a command in the **Simple Shell** and presses Enter
* **Simple Shell** tokenizes the command using " " as a delimiter. Each token is stored in a double pointer, where the first pointer is the command,
and the others one are arguments to the command.
* If the user entered a command using it's path, like *usr/bin/ls*, **Simple Shell** will search in the mentionned path and try to execute it. If the command exists, it will execute it. If not, it will display an error message.
* If the user simply enters a command like *pwd*, **Simple Shell** will search for it in each directory of the PATH global environment.
If a match is found, it will execute the command, if not, it will display an error message.


### Authors
* Marc-Antoine Vannier <[Marcantoine4581](https://github.com/Marcantoine4581)>
* Thomas Borde <[thomasborde94](https://github.com/thomasborde94)>