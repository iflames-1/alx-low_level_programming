#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stddef.h>

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

#endif /* _MAIN_H_ */
