#include <stdio.h>
/**
 * main - main block
 * Description: print alphabet
 * Return: Always 0
 */
int main(void)
{
	char c;

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

