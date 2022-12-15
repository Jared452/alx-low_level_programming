#include <stlib.h>
#include <stdio.h>
/**
 * main - print the number from 1 to 100
 * 3 multiplies print fizz instead of the number
 * 5 print buzz instead of number
 * 3 & 5 print fizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 3 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d, n");
	}
	printf("\n");
	return (0);
}
