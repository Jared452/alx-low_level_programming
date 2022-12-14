#include "main.h"

/**
 * _islower- prints the alphabet, in lowercase
 *
 * Return: 0
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
