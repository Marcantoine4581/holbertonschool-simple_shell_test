#include "shell.h"
#include <string.h>
char **tokenizer(char *cmd);

char **tokenizer(char *cmd)//ls -la
{
	unsigned int i = 0;
	char *copy_cmd;
	char *token;
	char **argv = NULL;
	int argc = 0;

	copy_cmd = strdup(cmd);
	token = strtok(copy_cmd, " ");

	while (token)
	{
		token = strtok(NULL, " ");
		printf("argc count: %i\n", argc);
		argc++;
	}

	argv = malloc(sizeof(char *) * argc);

	token = strtok(copy_cmd, " ");
	while (token)
	{
		argv[i] = token;
		printf("tokenizer print: %s\n", argv[i]);
		i++;
		token = strtok(NULL, " \n");
	}
	argv[i] = NULL;
	
	return (argv);
}

int main(void)
{
	unsigned int i;
	char *cmd = "jean louis";
	char **argv = NULL;

	//argv = malloc(sizeof(char *) * 3);
	argv = tokenizer(cmd);
	
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
