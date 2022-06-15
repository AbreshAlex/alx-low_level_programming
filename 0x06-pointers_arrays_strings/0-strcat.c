#include "main.h"

/**
 * *_strcat - a fun that concatenates two strings
 * @src: string to be appended
 * @dest: string to receive appendment
 * Return: pointer to dest result
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;


for (; dest[i] != '\0'; i++)
;
for (; src[j] != '\0'; j++, i++)
dest[i] = src[j];
dest[i + 1] = '\0';

return (dest);
}
