#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of strings
 * @width: width of array
 * @height: height of array
 * Return: int* or NULL
 */
int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(height * 8);
if (arr == NULL)
return (NULL);

for (i =  0; i < height; i++)
{
arr[i] = malloc(width * 4);
if (arr[i] == NULL)
return (NULL);
}

for (i = 0; i <= height; i++)
for (j = 0; j <= width; j++)
arr[i][j] = 0;
;

return (arr);
}
