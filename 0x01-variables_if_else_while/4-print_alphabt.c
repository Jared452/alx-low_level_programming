#include <stdio.h>
/**
 * main - main block
 * Description: print alphabet
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'e' && c != 'q') && c <= 'z')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

