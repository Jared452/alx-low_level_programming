#include <stlib.h>
#include <stdio.h>
/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0
 */
int main()
{
    int i, n ;
    printf("Enter the number :");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        if (i%15 == 0)
            printf ("FizzBuzz\t");

        else if ((i%3) == 0)
            printf("Fizz\t");

        else if ((i%5) == 0)
            printf("Buzz\t");

	else
            printf("%d\t", i);
    }
    return 0;
}
