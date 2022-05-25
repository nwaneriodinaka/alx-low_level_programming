#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @i: linked list
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *i)
{
	size_t j = 0;

	while (i != NULL)
	{
		if (i->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", i->len, i->str);

		j++;
		i = i->next;
	}

	return (j);
}
