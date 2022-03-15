#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers go there */

/* betty style doc for function main goes there */

/**
 *
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("The number n: %d is positive\n",n);

	} 
	
	else if (n == 0) 
	{
		printf("The number n: %d is zero\n",n);

	} 
	
	else
	{
		printf("The number n: %d is negative\n",n);

	}
	return (0);
}
