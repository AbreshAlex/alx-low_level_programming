#include "main.h"

/**
 * *_strncat - a fun that concatenates two strings only n bytes
 * @src: string to be appended
 * @dest: string to receive appendment
 * @n:  number of bytes to append
 * Return: pointer to dest result
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;


for (; dest[i] != '\0'; i++)
;

for (; src[j] != src[n]; j++, i++)
dest[i] = src[j];

dest[i - 1] = '\0';

return (dest);
}
