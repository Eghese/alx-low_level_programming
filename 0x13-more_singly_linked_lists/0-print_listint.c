#include "lists.h"
#include <stdio.h>
/**
 * print_listint - A function that prints all the element of listint_t list.
 * @h: a pointer of a node struct
 * Return: sucesses
 */
size_t print_listint(const listint_t *h)
{
	unsigned int temp;

	temp = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		temp++;
	}
	return (temp);
}
