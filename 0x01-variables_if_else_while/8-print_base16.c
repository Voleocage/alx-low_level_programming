#include <stdio.h>
#include <stdlib.h>

/**
 * Main - First function
 * Description: Print num in base 16 in lowercase
 * Return: returns a success (0)
 */

int main(void)
{
	int i;
	int x;

	for(i='1';i<='9';i++)
		putchar(i);

	for(x='a';x<='f';x++)
		putchar(x);
	putchar('\n');
	return (0);
}
