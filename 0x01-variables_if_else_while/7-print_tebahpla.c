#include <stdio.h>
#include <stdlib.h>

/**
 * main - First function
 * Description: Print lowercase alphabets in reverse
 * Return: returns a success (0)
 */

int main(void)
{
	int i;

	for(i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');
	return (0);
}
