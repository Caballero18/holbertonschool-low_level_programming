#include "main.h"
#include <stdio.h>

/**
 * _isupper - code.
 * @c: variable of function.
 *
 * Return: Always 0.
 */
int _isupper(int c);
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
