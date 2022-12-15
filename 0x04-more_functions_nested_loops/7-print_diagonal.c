#include "main.h"

/**
 * print_diagonal - function that draws diagonal line
 * @n: input number
 * Return: diagonal
 */
void print_diagonal(int n)
{

int co, cp;

if (n <= 0)
{
_putchar('\n');
}

else
{

for (co = 1; co <= n; co++)
{

for (cp = 1; cp < co; cp++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
