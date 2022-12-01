#include "shell.h"

/**
 * main - main function
 * Description: main function
 * @argc: number of arguments when executing
 * @argv: pointer to arguments typed when executing
 * Return: 0
 */

int main (int argc, char **argv)
{
	size_t n;
	char *buffer = NULL;

	write(1, ":) ", 3);
	getline(&buffer, &n, stdin);
	return (0);
}
