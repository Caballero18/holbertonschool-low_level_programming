#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints
 * @h: pointer to the struct
 *
 * Return: size_t
 *
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for(count = 0; h != NULL; count++)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", (*h).len, (*h).str);
		h = (*h).next;
	}
		return (count);
	

}
