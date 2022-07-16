#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* print_list - function to print node elements
* @h: listint_t type of node struct
* Return: Always successful
*/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str ==  NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
