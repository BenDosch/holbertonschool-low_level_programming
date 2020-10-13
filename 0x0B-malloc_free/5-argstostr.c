#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *new;
	int lennew;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			lennew++;
		}
		lennew++;
	}
	new = malloc(sizeof(char) * (lennew + 1));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k] = av[i][j];
			k++;
		}
		new[k] = '\n';
		k++;
	}
	new[k] = '\0';
	return (new);
}
