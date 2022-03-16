#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 * Description: Print the alphabet in lowercase
 * Return: Returns a success 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return(0);
}
