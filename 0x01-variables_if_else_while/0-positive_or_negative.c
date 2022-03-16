#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * Main - First function
 * Description: program outputs a random number
 * Return: returns a success (0)
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
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
