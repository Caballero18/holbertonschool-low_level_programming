#include "main.h"

/**
* _isdigit - function that check in uppercase variable entry
* @c: Variable that entry
* Return: 1 if uppercase
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
