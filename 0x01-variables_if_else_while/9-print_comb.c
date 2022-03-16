#include <stdio.h>
#include <stdlib.h>

/**
 * main - First function
 * Description: Print single digit numbers
 * Return: returns a success (0)
 */

int main(void)
{
	int i;

	for (i = '0';i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(' 44');
		}
	}
	putchar('\n');
	return (0);
}
