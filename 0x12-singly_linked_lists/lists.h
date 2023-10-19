#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 *struct list - singly linked list
 *@str: string
 *@len: length of the string
 *@next: points to next string
 */
struct list
{
	char *str;
	unsigned int len;
	struct list *next;
};
typedef struct list list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

int _strlen(const char *s);

#endif /* _LIST_H_ */
