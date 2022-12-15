#include <stdio.h>
/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("%d FizzBuzz\t");

		else if ((i % 3) == 0)
			printf("%d Fizz\t");

		else if ((i % 5) == 0)
			printf("%d Buzz\t");

		else
			printf("%d\t", i);
	}
	return (0);
	printf("\n");
}
