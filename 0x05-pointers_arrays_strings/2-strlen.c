#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * strlen - returns the string length.
 * @s: string
 * return: length
 */
int _strlen(char *s)
{
	int acg = 0;

	while (*s != '\0')
	{
		s++;
		acg++;
	}
	return (acg);
}
