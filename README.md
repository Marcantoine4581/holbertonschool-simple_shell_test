# `C - Simple Shell`

* The **Simple Shell** is part of the Holberton School learning program.
* It inteprets commands entered by the user to execute simple commands.

### Compilation and Usage
To use the Simple Shell, compile all the c files in the repository and the header,then run the resulting executable.
```
gcc *.c shell.h -o simple_shell
./simple_shell
```

You can use **Simple Shell** interactively and non-interactively using pipes.
For example, in the standard shell :
```
$ echo "echo Hello world" | ./simple_shell
Hello world