#include "main.h"

/**
 * print_square - function that draws diagonal line
 * @size:size of both width and length
 * Return: squarw made of '#'
 */
void print_square(int size)
{

int co, cp;

if (size <= 0)
{
_putchar('\n');
}

else
{

for (co = 1; co <= size; co++)
_putchar('#');
{

for (cp = 2; cp <= size; cp++)
_putchar('#');
}
_putchar('\n');
}
}
}
