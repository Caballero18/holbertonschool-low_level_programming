#include "main.h"
#include <stdio.h>

/**
* _isupper - function that check in uppercase.
* @c: Variable that entry
* Return: 1 
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
