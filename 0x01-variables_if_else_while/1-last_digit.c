#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number and wether it i greater than 5, less than 6 0r 0.
 *
 * Return: 0 (passed)
 */
int main(void)

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) >5)
{
	printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
}
        else if ((n % 10) < 6 && (n % 10) ! = 0)
{
	print("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
        else
{
	printf("last digit of %d is %d and 0\n", n, n % 10);
}
        return (0);
	}
	
