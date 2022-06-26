#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: char* or null
 */
char *str_concat(char *s1, char *s2)
{
char *arr;
unsigned int i, j, k;


for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

arr = malloc(i + j + 1);

if (arr == NULL)
return (NULL);

for (k = 0; k < i; k++)
{
*(arr + k) = s1[k];

/*if (k == i - 1)*/
/*{*/
/*for (j = 0; s2[j] != '\0'; j++)*/
/**(arr + k + 1) = s2[j];*/
/*}*/

}

for (k = 0; s2[k] != '\0'; k++)
*(arr + i + k) = s2[k];

return (arr);
}
