# `C - Simple Shell`

* The **Simple Shell** is part of the Holberton School learning program.
* It inteprets commands entered by the user to execute simple commands.

### Compiler and list of authorized functions
The **Simple Shell** is compiled this way :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell
```
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
If you execute the **Simple Shell* interactively, run ./simple_shell and you can execute simple commands.
At the end of each execution, the simple shell displays a new prompt when ready for usage.