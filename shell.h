#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Global environemnt */
extern char **environ;

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

/* String functions */
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

/* Environment functions */
char *_getenv(const char *var);

/* Singly list functions */
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);

#endif
