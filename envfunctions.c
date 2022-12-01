#include "shell.h"

/**
 * _getenv - returns choosen env variable
 * Description: returns choosen env variable (name)
 * @name: env variable we want to return
 * Return: pointer to content of name variable
 */

char *_getenv(const char *name)
{
	char *token = NULL, *buffer;
	char **env_copy = environ;
	int i = 0;

	while (environ[i])
	{
		i++;
	}

	env_copy = malloc(sizeof(char *) * i + sizeof(char *));
	for (i = 0; environ[i]; i++)
	{
		env_copy[i] = strdup(environ[i]);
	}
	env_copy[i] = NULL;

	i = 0;
	while (env_copy[i])
	{
		token = strtok(env_copy[i], "=");
		if (strcmp(name, token) == 0)
			break;
		i++;
	}
	token = strtok(NULL, "=");
	buffer = strdup(token);
	for (i = 0; env_copy[i]; i++)
	{
		free(env_copy[i]);
	}
	free(env_copy[i]);
	free(env_copy);
	return (buffer);
}
