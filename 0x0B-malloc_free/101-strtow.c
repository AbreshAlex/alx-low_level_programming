#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: NULL or pointer to array of strings
 */
char **strtow(char *str)
{
	int i, j, k = 0, l = 0, c = 0;
	char **arr;

for (i = 0; str[i] != '\0'; i++)
{
	if ((str[i] != ' ' && str[i] != '\0') &&
	(str[i + 1] == ' ' || str[i + 1] == '\0'))
		k++;
	if (str[i] != ' ')
		c++;
}
	k = k + 1;
	c = c + k + 1;
	arr = malloc(sizeof(char *) * k);
	if (arr == NULL)
	return (NULL);
	for (i = 0; i < k; i++)
	{
		arr[i] = malloc(sizeof(char) * c);
		if (arr[i] == NULL)
		return (NULL);
	}
i = 0;
for (j = 0; str[j] != '\0'; j++)
{
	if (str[j] != ' ')
	{
		for (l = 0; str[j] != ' ' && str[j] != '\0'; l++, j++)
		arr[i][l] = str[j];
		arr[i][l] = '\0';
		i++;
		continue;
	}
	continue;
}
	return (arr);
}
