#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of a string
 * @str: string to copy
 * Return: char* or null
 */
char *_strdup(char *str)
{
char *arr;
unsigned int i = 0, j;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;
i = i + 1;

arr = malloc(i);

if (arr == NULL)
return (NULL);

for (j =  0; j < i; j++)
*(arr + j) = str[j];

return (arr);
}
