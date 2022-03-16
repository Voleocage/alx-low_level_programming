#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Main - First function
 * Description: Print all single digit numbers from base 10
 * Return: return a success (0)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');
	return (0);
}
