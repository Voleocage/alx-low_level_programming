#include <stdio.h>

/**
 * main - First function
 * Description: print all single digit numbers of base 10
 * Return: returns a success 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
