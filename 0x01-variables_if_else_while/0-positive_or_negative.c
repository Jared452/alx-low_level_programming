#include <stdlib.h>
#include <time.h>
#include <stdio>
/**
 * main - main block
 * Description: get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
        n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n > 0)
                printf("%i is positive\n", n);
	else (n > 0)
                printf("%i is positive\n", n);
	return (0);
}
