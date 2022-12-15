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
int i;
char f[] = "fizz";
char b[] = "Buzz";
char fb[] = "fizzBuzz";

for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s ", fb);
else if (i % 3 == 0)
printf("%s ", f);
else if (i % 5 == 0)
printf("%s ", b);
else
printf("%d ", i);
}
printf("\n");
return (0);
}
