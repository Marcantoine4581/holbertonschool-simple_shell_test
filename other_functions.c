#include "shell.h"

/**
 * _putchar - Writes the character c to stout
 * @c: The character to print
 * Return: On succes 1, or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
