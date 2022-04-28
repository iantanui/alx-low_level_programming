#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: constant pointer to string
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *s, *cond = "cifs";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				i++;
				continue;
				break;
		}
		j = 0;
		while (cond[j])
		{
			if (cond[j] == format[i] && i < strlen(format) - 1)
				printf(", ");
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
