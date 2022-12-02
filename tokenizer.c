#include "shell.h"
#include <string.h>
char **tokenizer(char *cmd);

char **tokenizer(char *cmd)//ls -la
{
	unsigned int i = 0;
	char *copy_cmd1;
	char *copy_cmd2;
	char *token;
	char **argv = NULL;
	int argc = 0;

	copy_cmd1 = strdup(cmd);
	copy_cmd2 = strdup(cmd);
	token = strtok(copy_cmd1, " ");

	while (token)
	{
		token = strtok(NULL, " ");
		printf("argc count: %i\n", argc);
		argc++;
	}

	argv = malloc(sizeof(char *) * (argc + 1));

	token = strtok(copy_cmd2, " ");
	while (token)
	{
		argv[i] = token;
		printf("tokenizer print: %s\n", argv[i]);
		token = strtok(NULL, " \n");
		i++;
	}
	argv[i] = NULL;
	free(copy_cmd1);
	return (argv);
}

int main(void)
{
	unsigned int i = 0;
	char *cmd = "jean louis";
	char **argv = NULL;

	//argv = malloc(sizeof(char *) * 3);
	argv = tokenizer(cmd);
	
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	free(argv);
	return (0);
}
