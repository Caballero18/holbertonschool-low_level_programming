#include "main.h"

/**
 * _strlen - returns the string length.
 * @s: string
 * return: acg
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
