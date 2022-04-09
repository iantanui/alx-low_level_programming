#include "main.h"

/**
 * argstostr - concatenates all arguments of program
 * @ac: argc a.k.a., number of arguments passed
 * @av: argv[] a.k.a., array of arguments passed
 * Return: string of concatenated values
 */
char *argstostr(int ac, char **av)
{
	unsigned int i, j, k = 0, count = 0;
	char *str;
	unsigned int a = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* count total number of characters */
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
			count += 1;
	}

	count += a + 1; /* adding space for newlines & null terminator*/

	str = (char *)malloc(count * sizeof(char));

	for (i = 0; i < a; i++)
	{
		for (j = 0; j <= strlen(av[i]); j++)
		{
			if (j == strlen(av[i]))
				str[k++] = '\n';
			else
				str[k++] += av[i][j];
		}
	}

	return (str);
	free(str);
}
