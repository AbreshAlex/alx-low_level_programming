#include "main.h"

/**
 * *_strncpy - a fun that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of elements to copy
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

for (; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
