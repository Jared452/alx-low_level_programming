#include <stdio.h>
/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0
 */
int main(void)
{
	int i, n;

	printf("Enter the number :");
	scanf(" %d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
			printf(" FizzBuzz\n");

		else if ((i % 3) == 0)
			printf(" Fizz\n");

		else if ((i % 5) == 0)
			printf(" Buzz\n");

		else
			printf(" %d\n", i);
	}
	return (0);
}
