#include <stdio.h>
#include <stdlib.h>

/**
 * main - First function
 * Description: Print lowercase & uppercase alphabets 
 * Return: returns a success 0
 */

int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar("\n");
	return (0);
}
