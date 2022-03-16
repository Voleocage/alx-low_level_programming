#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - program outputs a random number and it is evaluated whether the number is positive, negative or zero.
 * Return - returns a success (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);

	}
	
	else if (n == 0)
	{
		printf("%d is zero\n", n);

	}
	
	else
	{
		printf("%d is negative\n", n);

	}
	printf("\n");
	return (0);
}
