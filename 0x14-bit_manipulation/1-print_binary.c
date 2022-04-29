#include "main.h"

/**
 * binarize - convert number to binary
 * @n: number to convert
 * Return: nothing
 */
void binarize(unsigned long int n)
{
	unsigned int count = 1, j = 0, num = n;
	int i;
	char *s;

	/* get length of number */
	while (num / 10)
	{
		count++;
		num = num / 10;
	}
	/* create string */
	s = malloc(count * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return;
	}
	/* divide by 2 and add remainders */
	while (n > 0)
	{
		s[j] = n % 2 + '0';
		j++;
		n = n / 2;
	}
	/* print in reverse */

	i = strlen(s) - 1;
	for (; i >= 0; i--)
		printf("%c", s[i]);

	free(s);
}

/**
 * print_binary - print number in binary
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		binarize(n);
	}
}
