#include <stdio.h>
#include <stdlib.h>

/**
 * main - First function
 * Description: print two digit combinations
 * Return: returns a success (0)
 */

int main(void)
{
	int c;
	int i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if ( c < i )
			{
				putchar(c);
				putchar(i);

				if ( c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
