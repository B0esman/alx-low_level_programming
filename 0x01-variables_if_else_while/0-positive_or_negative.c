#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determine if a number is positive, negative or zero.
 *
 * Return: 0 (passed)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		prinf("%d is negative\n", n;
	}
	return (0);
	}
