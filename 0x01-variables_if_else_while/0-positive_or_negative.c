#include <stdlib.h>
#include <time.h>

/**
 * main - positive or negative.
 *
 * Return: 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("is negative\n")
	}
	else if (n < 0)
	{
		printf("is positive\n")
	}

	return (0);
}


