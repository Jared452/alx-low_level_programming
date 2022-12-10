#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: last digit of n is greater than 5
 * the string and is greater than 5
 * the last digit of n is 0: the string and is 0
 * last digit of n is less than 6 and not 0
 * the string and is less than 6 and not 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 5)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m > 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
